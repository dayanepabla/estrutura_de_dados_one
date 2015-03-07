// Teste da classe Rect
// Memory leak check done with valgrind.
// valgrind --leak-check=yes ./teste_vec3
//
// -------------------------------------------------------------------
// Para compilar:
// -------------------------------------------------------------------
// 1) Gere primeiramente o código objecto da classe Rect:
// $ cd src
// $ g++ -c -I ../include/ rect.cpp
//
// Serah gerado um arquivo rect.o na pasta src.
//
// -------------------------------------------------------------------
// 2) Agora gere a biblioteca estatica a partir do codigo objeto.
// $ cd ../lib
// $ ar rvs libRect.a ../src/rect.o
//
// Serah gerado o arquivo libRect.a
// Este eh o arquivo que eh distribuido para o "cliente", junto com os cabecalhos.
//
// -------------------------------------------------------------------
// 3) Compilando o programa principal.
// $ cd ..
// $ g++ -Wall -I ./include -L ./lib -l Rect ptrFunc.cpp -o ptrFunc
//
// Serah criado o executaval ptrFunc
// O -I indica em qual caminho procurar por cabecalhos (alem do PATH)
// O -L indica em qual caminho procurar por bibliotecas (alen do PATH)
// O -l <biblioteca> indica qual biblioteca deve ser "linkada" ao programa.
// -------------------------------------------------------------------

#include <cmath>
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

#include <new>
using std::bad_alloc;


#include "rect.h"
using namespace rectangle;

// Standard linear search.
template < typename Obj >
int linearSearch( Obj V[], int iSz, const Obj &Target )
{
    // Run through the array looking for the target.
    for ( int i(0); i < iSz; ++i ) {
        // TODO: Aqui eh o local de modificacao do codigo.

        // We rely on the operator==() from Rect to do the comparison!
        if ( V[ i ] == Target ) // Have we found it yet?
            return i;
    }
    return -1; // Sorry, it's not here...
}



int main( )
{
    Rect myContainer [] = { Rect( 1, 1, 2, 4),
                            Rect( 2, 2, 2, 1 ),
                            Rect( 2, 4, 1, 1 ),
                            Rect( 5, 3, 3, 1),
                            Rect( 4, 10, 2, 7 ),
                            Rect( -2, 3, 5, 6 ),
                            Rect( -1, -4, 10, 2 ),
                            Rect( 3, -3, 8, 8 )
                           };
    const int iSz = sizeof( myContainer )/sizeof( Rect );
    int iIdxTarget = -1;

    // Target in the container.
    Rect target1( -1, -4, 10, 2 );
    // Target NOT in the container, but it's got the same area as
    // the last rectangle: [ 3, -3, 8, 8 ].
    Rect target2( 0,  0, 8 , 8 );

    // Target NOT in the container, but it's got the same distance to origin as
    // the second rectangle: [ 2, 2, 2, 1 ].
    Rect target3( 2,  2, 20 , 20 );

    float fDist2Origin = 0.f; // Stores the distance from the rectangle's corner to the origin.

    for( int i(0); i < iSz; ++ i )
    {
        fDist2Origin = sqrt( myContainer[i].getX()* myContainer[i].getX() + myContainer[i].getY()* myContainer[i].getY()  );
        cout << "\n >> Rect[ " << i << " ] = " << myContainer[ i ]
              << "; area = " << myContainer[ i ].area()
              << "; dist. p/ origem = " << fDist2Origin;
    }


    // First search.
    cout << "\n\n>>> Looking for rectangle " << target1 << " in the container...\n";
    iIdxTarget = linearSearch( myContainer, iSz, target1 );
    if ( iIdxTarget != -1 )
        cout << ">>> Successfull search! Target located at the position " << iIdxTarget << " of the container!\n";
    else
        cout << ">>> Search failed! Target has not been located inside the container, sorry.\n";

    // Second search.
    cout << "\n>>> Looking for rectangle " << target2 << " in the container...\n";
    iIdxTarget = linearSearch( myContainer, iSz, target2 );
    if ( iIdxTarget != -1 )
        cout << ">>> Successfull search! Target located at the position " << iIdxTarget << " of the container!\n";
    else
        cout << ">>> Search failed! Target has not been located inside the container, sorry.\n";

    // Second search.
    cout << "\n>>> Looking for rectangle " << target3 << " in the container...\n";
    iIdxTarget = linearSearch( myContainer, iSz, target3 );
    if ( iIdxTarget != -1 )
        cout << ">>> Successfull search! Target located at the position " << iIdxTarget << " of the container!\n";
    else
        cout << ">>> Search failed! Target has not been located inside the container, sorry.\n";


    cout << "\n>>> Normal exiting...\n\n";
    return EXIT_SUCCESS;
}

