#include <iostream>

using namespace std;

int main()
{
    float vetor[20];
    int i, menor;

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

    menor = vetor[0];
    for (i = 0; i <= 19; i++)
    {
        if ( vetor[i] <= menor )
        {
            menor = vetor[i];
        }
    }

    for ( i = 0; i <= 19; i++)
    {
        if ( vetor[i] == menor)
        {
            cout << "Menor elemento: " << menor << " Posição: " << i << endl;
        }
    }
    //cout << "Menor elemento do vetor: " << vetor[menor] << endl;
    //cout << "Posição: " << vetor[i] << endl;


    return 0;
}

