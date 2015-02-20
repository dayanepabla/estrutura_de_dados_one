// my first program in C++
// To compile: g++ -Wall q10.cpp q10principal.cpp -o q10

#include <iostream>
#include "raizes.h"

using namespace std;

int main()
{
    float r1, r2, a, b, c;

    cout << "Valor para a: ";
    cin >> a;

    cout << "Valor para b: ";
    cin >> b;

    cout << "Valor para c: ";
    cin >> c;

    cout << ">> Quantidade de raizes: " << raizes (a, b, c, &r1, &r2) << endl;
    cout << ">> As raizes sao: " << r1 << " e " << r2 << endl;

    return 0;
}
