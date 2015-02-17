#include <iostream>

using namespace std;

int main()
{
    int vetor[20];
    int i, aux;

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


    for ( i = 0; i <= 19; i++ )
    {
        aux = vetor [i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = aux;
    }

    cout << "[";

    for ( i = 0; i <= 19; i++ )
    {
        cout << vetor[ i ] << " ";
    }
    cout << "]\n";

    return 0;
}

