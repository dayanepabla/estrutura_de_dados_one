#include <iostream>

using namespace std;

int main()
{
    int B[20];
    int i, aux;

    for ( i = 0; i <= 19; i++)
    {
        cout << "Informe o número " << i + 1 << endl;
        cin >> B[i];
    }

    cout << "[";

    for ( i = 0; i <= 19; i++ )
    {
        cout << B[i] << " ";
    }
    cout << "]\n";

    for (i = 1; i <= 18; i++)
    {
        if (i % 2 != 0)
        {
            aux = B[i];
            B[i] = B[i + 1];
            B[i + 1] = aux;
        }
    }

    cout << "[";

    for ( i = 0; i <= 19; i++ )
    {
        cout << B[i] << " ";
    }
    cout << "]\n";

    return 0;
}
