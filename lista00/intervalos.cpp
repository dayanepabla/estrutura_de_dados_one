#include <iostream>

using namespace std;

int main () {
    int x;
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;
    int cont_total = 0;

    cout <<"Entre com valores inteiros ( Ctrl + d p / encerrar ): " <<endl;

    while (cin >> x) {
        if (x >= 0 && x < 25){
            cont1++;
        }
        if (x >= 25 && x < 50){
            cont2++;
        }
        if (x >= 50 && x < 75){
            cont3++;
        }
        if (x >= 75 && x <= 100){
            cont4++;
        }
        cont_total++;
    }

    cout <<"Porcentagem de números no intervalo [0, 25): "<<100*cont1/cont_total<<endl;
    cout <<"Porcentagem de números no intervalo [25, 50): "<<100*cont2/cont_total<<endl;
    cout <<"Porcentagem de números no intervalo [50, 75): "<<100*cont3/cont_total<<endl;
    cout <<"Porcentagem de números no intervalo [75, 100]: "<<100*cont4/cont_total<<endl;

    return 0;
}

