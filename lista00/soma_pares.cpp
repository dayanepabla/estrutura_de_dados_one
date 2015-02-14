#include <iostream>

using namespace std;

int main ()
{
    int m, n;
    int soma = 0;
    cout << "Entre com dois valores inteiros ( Ctrl + d para encerrar ): " << endl;

    while ( cin >> m && cin >> n )
    {

        for ( int i (0); i < n; ++i )
        {
            cout << "Entre com dois valores inteiros ( Ctrl + d para encerrar ): " << endl;
            soma += m + ( n - 1 );
        }

        cout << "Soma: " << soma << endl;
    }
    return 0;
}

