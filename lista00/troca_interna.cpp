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
        cout << vetor[i] << " ";
    }
    cout << "]\n";


    for ( i = 0; i < 10; i++ )
    {
        aux = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = aux;
    }

    cout << "[";

    for ( i = 0; i <= 19; i++ )
    {
        cout << vetor[i] << " ";
    }
    cout << "]\n";

    return 0;
}

