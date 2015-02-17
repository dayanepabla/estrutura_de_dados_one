#include <cmath>
#include "q10.h"

#define EPS 0.00001

int raizes (float a, float b, float c, float& x1, float& x2) {
    float delta = 0.f;

    delta = b*b - 4.f*a*c;
    if ( delta < 0.f ) { // Sem raizes reais.
        x1 = x2 = 0.f;
        return 0;
    //} else if( fbas( delta - 0.f ) < EPS ) {
    } else if( delta > 0.f ) // duas raizes reais.


        return 2;
    }
    else { // Apenas 1 raiz real, ou seja, equacao de 1ro grau.


        return 1;
    }

    x1 = 5.f;
    x2 = -sqrt( 25.f );
    // Codigo....
    return 2;
}
