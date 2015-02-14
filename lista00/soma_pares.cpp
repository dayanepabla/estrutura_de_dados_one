#include <iostream>

using namespace std;

int main ()
{
    int m, n, i;
    int sum = 0;
    cout << "Entre com dois valores inteiros ( Ctrl + d para encerrar ): " << endl;

    while ( cin >> m && cin >> n )
    {

        for ( i = m, sum = 0; i < n + m; i++)
        {
            sum += i;
        }

        cout << "Soma: " << sum << endl;
        cout << "Entre com dois valores inteiros ( Ctrl + d para encerrar ): " << endl;
    }
    return 0;
}

