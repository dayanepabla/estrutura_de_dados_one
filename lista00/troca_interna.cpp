#include <iostream>

using namespace std;

int main()
{
    int A[20];
    int i, aux;

    for ( i = 0; i <= 19; i++)
    {
        cout << "Informe o número " << i + 1 << endl;
        cin >> A[i];
    }

    cout << "[";

    for ( i = 0; i <= 19; i++ )
    {
        cout << A[i] << " ";
    }
    cout << "]\n";


    for ( i = 0; i < 10; i++ )
    {
        aux = A[i];
        A[i] = A[19 - i];
        A[19 - i] = aux;
    }

    cout << "[";

    for ( i = 0; i <= 19; i++ )
    {
        cout << A[i] << " ";
    }
    cout << "]\n";

    return 0;
}

