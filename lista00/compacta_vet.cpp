#include <iostream>

using namespace std;

int main()
{
    int C[20];
    int i, aux;

    for ( i = 0; i <= 19; i++)
    {
        cout << "Informe o número " << i + 1 << endl;
        cin >> C[i];
    }

    cout << "[";

    for ( i = 0; i <= 19; i++ )
    {
        cout << C[i] << " ";
    }
    cout << "]\n";

    for (i = 0; i <= 19; i++)
    {
        if (i <= 0)
        {
            aux = C[i];
            C[i] = C[i - 1];
            C[i - 1] = aux;
        }
    }

    cout << "[";

    for ( i = 0; i <= 19; i++ )
    {
        cout << C[i] << " ";
    }
    cout << "]\n";

    return 0;
}
