#include <iostream>

using namespace std;

float porcetagem (int total, int numero)
{
    return 100*numero/total;
}

int main ()
{
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

    cout << "Porcentagem de números no intervalo [0, 25): " << porcetagem(counter_total, counter_interval_one) <<endl;
    cout << "Porcentagem de números no intervalo [25, 50): " << porcetagem(counter_total, counter_interval_two)  <<endl;
    cout << "Porcentagem de números no intervalo [50, 75): " << porcetagem(counter_total, counter_interval_three)  << endl;
    cout << "Porcentagem de números no intervalo [75, 100]: " << porcetagem(counter_total, counter_interval_four)  << endl;

    return 0;
}

