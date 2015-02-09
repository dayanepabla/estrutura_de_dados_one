#include <iostream>

using namespace std;

int main() {
    int i = 1; // Inicializado com 1 para a exibição do número começar do 1
    int num;
    int cont = 0;

    while (i <= 5) {
        cout << "Informe o número "<< i <<endl;
        cin >> num;
        i++;
        if (num < 0){
            cont++;
        }
    }
    cout << "Total de números negativos: "<< cont <<endl;
    return 0;
}
