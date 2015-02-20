#include <cmath>
#include <iostream>

#define EPS 0.00001

using namespace std;

int raizes (float a, float b, float c, float * x1, float * x2) {
    float delta = 0.f;

    delta = b*b - 4.f*a*c;

    if ( delta < 0.f )
    {
        *x1 = *x2 = 0.f;

        return 0;
    }
    else if( delta > 0.f )
    {
        *x1 = (-b - sqrt(delta)) / 2.f*a;
        *x2 = (-b + sqrt(delta)) / 2.f*a;

        return 2;
    }
    else
    {
        *x1 = *x2 = (-b + sqrt(delta)) / 2.f*a;

        return 1;
    }
}

