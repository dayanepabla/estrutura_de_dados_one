// Para compilar: g++ -Wall -pedantic drive_les_v1.cpp les_v1.cpp -o drive_les_v1

#include "les_v1.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void testPushFrontAndPrint ( void );
void testClear ( void );
void testLength ( void );
void testEmpty ( void );
void testPushBack ( void );
void testFind ( void );
void testInsert ( void );
void testRemove ( void );
void testFront ( void );
void testBack ( void );
void testPopFront ( void );


int main ( void )
{
    testPushFrontAndPrint();
    testClear();
    testLength();
    testEmpty();
    testPushBack();
    testFind();
    testInsert();
    testRemove();
    testFront();
    testBack();
    testPopFront();

    cout << "\n\n>>> Normal exiting...\n";

    return EXIT_SUCCESS;
}


void testPushFrontAndPrint ( void )
{
    cout << ">>> Test pushFront and print" << endl;

    SNPtr pHead(NULL);

    pushFront( pHead, 1 );
    pushFront( pHead, 3 );
    pushFront( pHead, 5 );
    pushFront( pHead, 7 );

    print( pHead );

    cout << "<<< Test pushFront and print\n" << endl;
}

void testClear ( void )
{
    cout << ">>> Test clear" << endl;

    SNPtr pHead(NULL);

    pushFront( pHead, 1 );
    pushFront( pHead, 3 );
    pushFront( pHead, 5 );
    pushFront( pHead, 7 );

    cout << "Antes do clear..." << endl;
    print( pHead );

    clear ( pHead );

    cout << "Depois do clear..." << endl;
    print( pHead );

    cout << "<<< Test clear\n" << endl;
}

void testLength ( void )
{
    cout << ">>> Test length" << endl;

    SNPtr pHead(NULL);

    cout << "Tamanho inicial: " << length( pHead ) << endl;

    pushFront( pHead, 1 );
    pushFront( pHead, 3 );
    pushFront( pHead, 5 );
    pushFront( pHead, 7 );

    cout << "Tamanho após adicionar 4 elementos: " << length ( pHead ) << endl;

    cout << "<<< Test length\n" << endl;
}


void testEmpty ( void )
{
    cout << ">>> Test empty" << endl;

    SNPtr pHead(NULL);

    cout << "Para uma lista vazia: " << empty( pHead ) << endl;

    pushFront( pHead, 1 );
    pushFront( pHead, 3 );
    pushFront( pHead, 5 );
    pushFront( pHead, 7 );

    cout << "Para uma lista não vazia: " << empty( pHead ) << endl;

    cout << ">>> Test empty\n" << endl;
}

void testPushBack ( void )
{
    cout << ">>> Test pushBack" << endl;

    SNPtr pHead(NULL);

    pushBack( pHead, 1 );
    pushBack( pHead, 3 );
    pushBack( pHead, 5 );
    pushBack( pHead, 7 );

    cout << "A lista não deve ser vaiza: " << empty( pHead ) << endl;
    print( pHead );

    cout << "<<< Test pushBack\n" << endl;
}

void testFind ( void )
{
    cout << ">>> Test find" << endl;

    SNPtr pHead(NULL);

    pushBack( pHead, 1 );
    pushBack( pHead, 3 );
    pushBack( pHead, 5 );
    pushBack( pHead, 7 );

    print( pHead );

    cout << "Encontra o valor anterior a 4: " << find( pHead, 4)->miData << endl;

    cout << "<<< Test find\n" << endl;
}

void testInsert ( void )
{
    cout << ">>> Test insert" << endl;

    SNPtr pHead(NULL);

    cout << "Antes de inserir -1..." << endl;
    print( pHead );

    cout << "Após inserir..." << endl;
    insert( pHead, NULL, -1 );
    print( pHead );

    cout << "<<< Test insert\n" << endl;
}


void testRemove ( void )
{
    cout << ">>> Test remove" << endl;

    int removed;
    SNPtr pHead(NULL);

    pushBack( pHead, 1 );
    pushBack( pHead, 2 );
    pushBack( pHead, 3 );

    cout << "Antes de remover o 3..." << endl;
    print( pHead );

    cout << "Após remover..." << endl;
    remove( pHead, find( pHead, 3), removed );
    print( pHead );

    cout << "<<< Test remove\n" << endl;
}

void testFront ( void )
{
    cout << ">>> Test front" << endl;

    int vfront;
    SNPtr pHead(NULL);

    pushBack( pHead, 1 );
    pushBack( pHead, 2 );
    pushBack( pHead, 3 );

    print ( pHead );

    front( pHead, vfront);

    cout << "O elemento front é: " << vfront << endl;

    cout << "<<< Test front\n" << endl;
}

void testBack ( void )
{
    cout << ">>> Test back" << endl;

    int vback;
    SNPtr pHead(NULL);

    pushBack( pHead, 1 );
    pushBack( pHead, 2 );
    pushBack( pHead, 3 );

    print ( pHead );

    back( pHead, vback);

    cout << "O elemento back é: " << vback << endl;

    cout << "<<< Test back\n" << endl;
}

void testPopFront ( void )
{
    cout << ">>> Test popFront" << endl;

    int vfront;
    SNPtr pHead(NULL);

    pushBack( pHead, 1 );
    pushBack( pHead, 2 );
    pushBack( pHead, 3 );

    cout << "Antes do popFront..." << endl;
    print ( pHead );

    cout << "Após o popFront..." << endl;
    popFront( pHead, vfront);
    print ( pHead );

    cout << "<<< Test popFront\n" << endl;
}
