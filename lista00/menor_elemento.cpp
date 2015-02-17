#include <iostream>

using namespace std;

int main()
{
    float vetor[20];
    int i;
    int menor;

    for ( i = 0; i <= 19; i++)
    {
        cout << "Informe o número " << i + 1 << endl;
        cin >> vetor[i];
    }

    cout << "[";
    for ( i = 0; i <= 19; i++ )
    {

        cout << vetor[ i ] << " ";
    }

    cout << "]\n";
    for (i = 0; i <= 19; i++)
    {
        if ( vetor[i] < vetor [i + 1] )
        {
            menor = vetor[i];
        }

    }

    cout << "Menor elemento do vetor: " << vetor[menor] << endl;
    cout << "Posição: " << vetor[i] << endl;


    return 0;
}
