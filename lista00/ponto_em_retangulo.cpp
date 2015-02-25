#include <iostream>

using namespace std;

int main()
{

    float xr1, yr1;
    float xr2, yr2;
    float xp, yp;
    float aux;


    cout << "Informe o primeiro par de coordenadas: " << endl;
    cin >> xr1 >> xr2;

    cout << "Informe o segundo par de coordenadas: " << endl;
    cin >> xr2 >> yr2;

    cout << "Informe as coordenadas do ponto de test: " << endl;
    cin >> xp >> yp;

    if (xr1 > xr2 && yr1 > yr2)
    {
        aux = xr1;
        xr1 = xr2;
        xr2 = aux;

        aux = yr1;
        yr1 = yr2;
        yr2 = aux;

    }

    if (xr1 != xr2 && yr1 != yr2)
    {
        cout << "Retângulo válido!" << endl;
    }

    if ()
    {
        cout << "O ponto encontra-se dentro do retângulo" << endl;
    }

    if ()
    {
        cout << "O ponto encontra-se na borda do retângulo" << endl;
    }

    if ()
    {
        cout << "O ponto encontra-se fora do retângulo" << endl;
    }

    return 0;

}
