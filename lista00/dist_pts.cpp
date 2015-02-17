#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, y1, x2, y2, dist;

    cout << "Informe as coordenadas do ponto P1: " << endl;
    cin >> x1 >> y1;
    cout << "Informe as coordenadas do ponto P2: " << endl;
    cin >> x2 >> y2;

    dist = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

    cout << "Distância Euclidiana entre os dois pontos: " << dist << endl;

    return 0;
}
