#include <iostream>

using namespace std;

void
printVector( int A[ ], int sz )
{
    cout << ">>> [ ";
    for ( int i(0); i < sz; ++i ){
        cout << A[ i ] << " ";
    }
    cout << "]\n";
}


int
fib( int limit, int * &A )
{
    int count = 0;
    int fib0 = 1;
    int fib1 = 0;
    int fib2 = 1;
    while ( fib2 < limit )
    {
        fib2 = fib0 + fib1;
        // cout << fib2 << " "; // imprimir na tela apenas para depurar
        count++; // usado para determinar o comprimento da sÃ©rie.
        fib0 = fib1;
        fib1 = fib2;
    }
    cout << endl; // descarrint acounint[count - 1];

    fib0 = 1, fib1 = 0, fib2 = 1;

    while ( fib2 < limit )
    {
        fib2 = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib2;
    }

    return count - 1;
}

int main ()
{
    int iLimit;
    int *A = NULL;

    cout << ">>> Informe um número inteiro (n > 0): ";
    cin >> iLimit;

    if ( iLimit < 0 )
    {
        cout << ">>> Sorry, only positive integers accepted. Aborting...\n";
    }
    else
    {
        int iSz = fib( iLimit, A );
        cout << ">>> Fibonacci" << iLimit << " : \n";
        printVector( A, iSz );
    }


    return 0;
}
