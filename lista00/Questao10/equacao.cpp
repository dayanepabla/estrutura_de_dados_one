// my first program in C++
// To compile: g++ -Wall q10.cpp q10principal.cpp -o q10

#include <iostream>
#include "q10.h"

int main()
{
    float r1, r2;

    std::cout << ">> Quantidade de raizes: " << raizes (1.0f, 2.f, 3.f, r1, r2 ) << std::endl;
    std::cout << ">> As raizes sao: " << r1 << " e " << r2 << std::endl;

    return EXIT_SUCCESS;
}