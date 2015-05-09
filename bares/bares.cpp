// Compilar: g++ -Wall bares.cpp -o bares


#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;

typedef struct Token {
    int kind;
    int value;
} Token;

class Bares {
    public:
        stringstream expression;
        Token token;
        Token matched;
        bool error_flag;
        string error_msg;

        bool power_operator() {
            return token.kind == '^';
        }

        bool multiplicative_operator() {
            return token.kind == '%' || token.kind == '/' || token.kind == '*';
        }

        bool minus_operator() {
            return token.kind == '-';
        }

        bool add_operator() {
            return token.kind == '+' || token.kind == '-';
        }

        bool is_valid_operator() {
            return power_operator() || multiplicative_operator() ||
                   add_operator() || token.kind == '(' || token.kind == ')';
        }

        void get_token() {
            int c;
            char op;
            int n;

            c = expression.peek();

            if (c >= '0' && c <= '9') {
                expression >> n;
                token.kind = 'N';
                token.value = n;

                c = expression.peek();

                if (c == '.') {
                    error("invalid floating point value");
                }
            } else {
                expression >> op;
                token.kind = op;

                if (!is_valid_operator() && expression.tellg() != -1) {
                    error("missing operator or operand3");
                }
            }
        }

        bool peek_token(int kind) {
            return token.kind == kind;
        }

        void match() {
            matched = token;
            get_token();
        }

        void error(string msg) {
            stringstream ss;

            ss << "error: " << msg << endl;

            if (!error_flag) {
                error_msg = ss.str();
            }

            error_flag = true;

        }

        int unary_expr() {
            int res = 0;

            if (peek_token(')')) {
                error(") without an opening (");
            } else if (peek_token('(')) {
                match();
                res = expr();

                if (!peek_token(')')) {
                    error("there is a missing )");
                } else {
                    match();
                    return res;
                }
            } else if (peek_token('N')) {
                match();
                return matched.value;
            } else {
                match();
                error("missing operator or operand2");
            }

            return res;
        }

        int minus_expr() {
            if (minus_operator()) {
                match();
                return -unary_expr();
            } else {
                return unary_expr();
            }
        }

        int power_expr() {
            int res = minus_expr();

            while (power_operator()) {
                match();
                res = pow(res, minus_expr());
            }

            return res;
        }

        int multiplicative_expr() {
            int res = power_expr();
            int tmp;

            while (multiplicative_operator()) {
                match();

                if (matched.kind == '*') {
                    res = res * power_expr();
                } else if (matched.kind == '/') {
                    tmp = power_expr();

                    if (tmp == 0) {
                        error("division by zero");
                    } else {
                        res = res / tmp;
                    }
                } else {
                    tmp = power_expr();

                    if (tmp == 0) {
                        error("division by zero");
                    } else {
                        res = res % tmp;
                    }
                }
            }

            return res;
        }

        int add_expr() {
            int res = multiplicative_expr();

            while (add_operator()) {
                match();

                if (matched.kind == '+') {
                    res = res + multiplicative_expr();
                } else {
                    res = res - multiplicative_expr();
                }
            }

            return res;
        }

        int expr() {
            return add_expr();
        }

        bool is_alpha(char c) {
            return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
        }

        bool is_number(char c) {
            return c >= '0' && c <= '9';
        }

        bool is_wrong_operator(char c) {
            bool flag;

            if (is_alpha(c) || is_number(c)) return false;

            flag = c == '+' || c == '-' || c == '*' || c == '/' || c == '%';
            flag |=c == '^' || c == '(' || c == ')';
            flag |= c == ' ' || c == '\t';

            return !flag;
        }

        void check_parenthesis_n_operators(string str) {
            int count = 0;
            bool invalid_operator = false;
            bool invalid_operand = false;
            bool fp = false;

            for (int i = 0; i < str.size(); ++i) {
                if (str[i] == '(') {
                    ++count;
                } else if (str[i] == ')') {
                    --count;
                } else if (str[i] == '.') {
                    fp = true;
                } else if (is_alpha(str[i])) {
                    invalid_operand = true;
                } else if (is_wrong_operator(str[i])) {
                    invalid_operator = true;
                }
            }

            if (count > 0) {
                error("unclosed scope");
            } else if (count < 0) {
                error("wrong closing scope");
            }

            if (invalid_operator) {
                error("expression contains invalid operators");
            }

            if (invalid_operand) {
                error("expression contains invalid operands");
            }

            if (fp) {
                error("are there any floating point value?");
            }
        }

        void init(string str) {
            error_flag = false;
            check_parenthesis_n_operators(str);
            expression.str(str);
            get_token();
        }
};

int main() {
    string str;
    int res;

    while (getline(cin, str)) {
        Bares b;
        b.init(str);
        res = b.expr();

        if (!b.error_flag) {
            cout << "res = " << res << endl;
        } else {
            cout << b.error_msg;
        }
    }

    return 0;
}
