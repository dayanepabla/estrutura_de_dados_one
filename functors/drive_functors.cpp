/*
 * Para compilar: g++ -Wall -std=c++0x drive_functors.cpp -o drive_functors
 * Se possível, use -std=c++11.
 */

#include <iostream>
#include <vector>


// The first version of findMatchingNumbers is based on a pointer to a function.
// The second version is based on function objectes (aka "functors").

/*!
 * \brief Select and return a list of number that matches a given criterion.
 *
 * This function creates a subset from the original set of integers bases
 * on a given predicate provided by the user as a functor.
 *
 * \param _V Input vector with the original elements.
 * \param _pred Predicate functor to select number from input.
 * \return A vector containing the selected elements.
 */
// Uncomment the line bellow to activate the function version based of function pointer.
// #define FUNC_POINTERS
#ifdef FUNC_POINTER
std::vector<int> findMatchingNumbers ( std::vector<int> _vec, bool (*_pred)(int) )
#else
template <typename FuncType>
std::vector<int> findMatchingNumbers( std::vector<int> _vec, FuncType _pred )
#endif
{
    // Vector to be returned with the matching numbers.
    std::vector<int> retVec;

    // Traverse vector and apply predicate to each number.
    for( const auto & e: _vec )
        if ( true == _pred( e ) )  // Does this number satisfy the predicate?
            retVec.push_back( e ); // ... then add it to the output vector.

    return retVec;
}

/*!
 * \brief Verifies whether a number is event.
 * \param _n Number to be checked.
 * \return True if the number is even, false otherwise.
 */
bool even( int _n )
{
    return ( 0 == (_n % 2) );
}

/*!
 * \brief Verifies whether a number is negative.
 * \param _n Number to be checked.
 * \return True if the number is negative, false otherwise.
 */
bool negatives( int _n )
{
    return ( _n < 0 );
}


// Functor to select even numbers.
struct EvenCriterion
{
    bool operator()( int _n )
    {
        return ( 0 == (_n % 2 ) );
    }
};

// Functor to select negative elements.
struct NegativeCriterion
{
    bool operator()( int _n )
    {
        return _n < 0;
    }
};



int main ( void )
{
    // Original set of elements.
    // FIRST method to initialize a vector.
    //int myints[] = { -16, 2, 77, 29, -12, 2, 16, 33, 77, -3 };
    //std::vector<int> V1 ( std::begin(myints), std::end(myints) );
    //
    // SECOND method to initialize a vector.
    std::vector<int> V1 = { -16, 2, 77, 29, -12, 2, 16, 33, 77, -3 };

    // Subset of selected elements that satisfy a certain criterion.
    std::vector<int> V2;


    // Show original set.
    std::cout << "\n>>> Original set of elements: [ ";
    for( const auto & e: V1 )
        std::cout << e <<  " ";
    std::cout << "]\n";

    // Apply selection.
    //V2 = findMatchingNumbers( V1, even );
    V2 = findMatchingNumbers( V1, EvenCriterion() );
    //V2 = findMatchingNumbers( V1, NegativeCriterion() ); // This version creates an anonymous functor.

    // Show subset satisfying the criterion
    std::cout << ">>> Subset matching the criterion: [ ";
    for( const auto & e: V2 )
        std::cout << e <<  " ";
    std::cout << "]\n";


    std::cout << "\n\n>>> Normal exiting...\n\n";
    return EXIT_SUCCESS;
}
