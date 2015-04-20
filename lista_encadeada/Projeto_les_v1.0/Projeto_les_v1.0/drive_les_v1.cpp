// Para compilar: g++ -Wall -pedantic drive_les_v1.cpp les_v1.cpp -o drive_les_v1

#include "les_v1.h"
#include <iostream>
#include <cstdlib>

using namespace std;


int main ( void )
{

    SNPtr pHead = NULL; // nullptr;
    int pfront;
    int pback;

    pushFront( pHead, 1 );
    pushFront( pHead, 3 );
    pushFront( pHead, 5 );
    pushFront( pHead, 7 );
    print( pHead );

    clear( pHead );
    cout << length( pHead ) << endl;

    cout << empty( pHead ) << endl;

    pushFront( pHead, 2 );
    pushFront( pHead, 4 );
    pushFront( pHead, 6 );
    pushFront( pHead, 8 );
    pushBack( pHead, 0 );
    print( pHead );



    cout << front( pHead, pfront ) << endl;

    cout << back( pHead, pback ) << endl;

    cout << popFront( pHead, pfront ) << endl;
    print( pHead );




    cout << "\n\n>>> Normal exiting...\n";
    return EXIT_SUCCESS;
}
