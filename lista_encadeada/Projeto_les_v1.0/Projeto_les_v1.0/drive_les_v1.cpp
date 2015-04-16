// Para compilar: g++ -Wall -pedantic drive_les_v1.cpp les_v1.cpp -o drive_les_v1

#include "les_v1.h"
#include <iostream>
using std::cout;


int main ( void ) {
    SNPtr pHead = nullptr;// nullptr;

    pushFront( pHead, 1 );
    pushFront( pHead, 3 );
    pushFront( pHead, 5 );
    pushFront( pHead, 7 );
    print( pHead );

    // Testando front()/back()
    int ret



    cout << "\n\n>>> Normal exiting...\n";
    return EXIT_SUCCESS;
}
