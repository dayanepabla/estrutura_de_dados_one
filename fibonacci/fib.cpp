/**
 * Altere e complete o programa de maneira que ele seja capaz de calcular a série
 * de Fibonacci até 10^19 ou 10000000000000000000.
 */

#include <iostream>
#include <cstdlib>

using namespace std;


//----------------------------------------------------------------------------------------
//! Imprime um vetor de inteiros unsigned long longos sem sinal.
/*! Esta função imprime na saÃída padrão um vetor de inteiros cujo tamanho é passado como
 *  argumento.
 *  @param A O vetor a ser impresso na saída padrão.
 *  @param sz O tamanho do vetor passado como argumento.
 */
void
printArray( unsigned long long int A[ ], unsigned long long int sz )
{
    // Imprimir o vetor.
    cout << ">>> [ ";
    for ( unsigned long long int i(0); i < sz; ++i ){
        cout << A[ i ] << " ";
    }
    cout << "]\n";
}

//----------------------------------------------------------------------------------------
//! Gera a sequencia de Fibonacci em um vetor atÃ© um limite informado.
/*! Esta função gera em um vetor alocado dinamicamente a série de Fibonacci até
 *  antes de atingir um limite inteiro passado por parâmetro.
 *  Por exemplo, se limite = 15, o vetor gerado deve ser [ 1 1 2 3 5 8 13 ], visto
 *  que o último elemento da sÃ©rie Ã© 13 < limite (=15).
 *
 *  @param limit O limite inteiro que determina o fim da série.
 *  @param A Pointeiro que deverá conter o vetor com a série.
 */
unsigned long long int
fib( unsigned long long int limit, unsigned long long int * &A )
{
    unsigned long long int count = 0;
    unsigned long long int fib0 = 1;
    unsigned long long int fib1 = 0;
    unsigned long long int fib2 = 1;
    while ( fib2 < limit )
    {
        fib2 = fib0 + fib1;
        // cout << fib2 << " "; // imprimir na tela apenas para depurar
        count++; // usado para determinar o comprimento da série.
        fib0 = fib1;
        fib1 = fib2;
    }
    cout << endl; // descarregar a lista.

    unsigned long long int acount = 0;
    A = new unsigned long long int[count - 1];

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
    unsigned long long int iLimit;
    unsigned long long int *A = NULL;

    cout << ">>> Indique o limite para a serie de Fibonacci (n > 0): ";
    cin >> iLimit;

    if ( iLimit < 0 )
    {
        cout << ">>> Sorry, only positive integers accepted. Aborting...\n";
    }
    else
    {
        unsigned long long int iSz = fib( iLimit, A );
        cout << ">>> The Fibonacci series up to " << iLimit << " is: \n";
        printArray( A, iSz );
    }


    return EXIT_SUCCESS;
}
