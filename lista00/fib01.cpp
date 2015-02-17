#include <iostream>

using namespace std;

void
printVector( int A[ ], int s )
{

    cout << ">>> [ ";
    for ( int i(0); i < s; ++i ){
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

        count++;
        fib0 = fib1;
        fib1 = fib2;
    }
    cout << endl;

    int acount = 0;
    A = new int[count - 1];

    fib0 = 1, fib1 = 0, fib2 = 1;

    while ( fib2 < limit )
    {
        fib2 = fib0 + fib1;
        A[acount] = fib2;
        acount++;
        fib0 = fib1;
        fib1 = fib2;
    }

    return count - 1;
}

int main ()
{
    int iLimit;
    int *A = NULL;

    cout << ">>> Indique o limite para a serie de Fibonacci (n > 0): ";
    cin >> iLimit;

    if ( iLimit < 0 )
    {
        cout << ">>> Apenas números positovos, por favor.\n";
    }
    else
    {
        int iSz = fib( iLimit, A );
        cout << ">>> Série de Fibonacci até: " << iLimit << " is: \n";
        printVector( A, iSz );
    }


    return 0;
}
