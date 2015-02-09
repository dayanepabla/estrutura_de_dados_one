#include <iostream>

using namespace std;

int main () {
    int x;
    int counter_interval_one = 0;
    int counter_interval_two = 0;
    int counter_interval_three = 0;
    int counter_interval_four = 0;
    int counter_total = 0;

    cout << "Entre com valores inteiros ( Ctrl + d p / encerrar ): " << endl;

    while (cin >> x) {
        if (x >= 0 && x < 25){
            counter_interval_one++;
        }
        if (x >= 25 && x < 50){
            counter_interval_two++;
        }
        if (x >= 50 && x < 75){
            counter_interval_three++;
        }
        if (x >= 75 && x <= 100){
            counter_interval_four++;
        }
        counter_total++;
    }

    cout << "Porcentagem de números no intervalo [0, 25): " << 100*counter_interval_one/counter_total <<endl;
    cout << "Porcentagem de números no intervalo [25, 50): " << 100*counter_interval_two/counter_total <<endl;
    cout << "Porcentagem de números no intervalo [50, 75): " << 100*counter_interval_three/counter_total <<endl;
    cout << "Porcentagem de números no intervalo [75, 100]: " << 100*counter_interval_four/counter_total <<endl;

    return 0;
}

