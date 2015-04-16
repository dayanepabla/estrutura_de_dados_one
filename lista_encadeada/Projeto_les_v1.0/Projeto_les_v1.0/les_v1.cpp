// This is a stub code (or skeleton code) just to allow the first compilation.

#include <iostream>
#include "les_v1.h"

using namespace std;

//! Prints the list.
/*! This a debugging function that prints the list content.
 *  @param _pAIL Pointer to the head of the list. It NULL, list is empty.
 */
void print( const SNPtr _pAIL )
{
    SLLNode * pWork = _pAIL // SLLNOde * pWork;
    std::cout << "{ ";
    while ( pWork != nullptr )
    {
        std::cout << pWork->miData << " ";
        pWork = pWork->mpNext;
    }
    if ( _pAIL == nullptr )
        std::cout <<"<empty>";
    std::cout << "}\n";
}

//! Length of the list.
/*! Calculates and return the length of the list. Length is zero, if list is empty.
 *  @param _pAIL Pointer to the head of the list. It NULL, list is empty.
 *  @return The length.
 */
int length( const SNPtr _pAIL )
{
    int ct(0);
    SLLNode * pWork = _pAIL;
    while ( pWork != nullptr )
    {
        ct++;
        pWork = pWork->mpNext;
    }

    return ct;
}


bool empty( const SNPtr _pAIL )
{
    return ( _pAIL == nullptr );

}


void clear( SNPtr & _pAIL )
{
    SLLNode * pAux;
    SLLNode * pWork = _pAIL; // SLLNode * pWork;
    while ( pWork != nullptr )
    {
        pAux = pWork; // Guarda/marca o nó a ser eliminado.
        pWork = pWork->mpNext; // Vamos para o próximo...
        delete pAux; // Remove o marcado.
    }
    _pAIL = nullptr; // Precisamos fazer o head do cliente apontar para nulo.
}


bool front( const SNPtr _pAIL, int & _retrievedVal )
{
    // Se a lista for vazia?
    if ( _pAIL == nullptr )
        return false;
    _retrievedVal = _pAIL->miData;
    return true;
}


bool back( const SNPtr _pAIL, int & _retrievedVal )
{
    SLLNode * pWork = _pAIL;
    // Avanço até o último.
    while ( pWork != nullptr )
    {
        // Será que este é o último?
        if ( pWork->mpNext == nullptr )
        {
            _retrievedVal = pWork->miData;
            return true;
        }

        pWork = pWork->mpNext;
    }

    return true;
}


bool pushFront( SNPtr & _pAIL, int _newVal )
{
    // Alocando o novo noh para receber os dados.

    SLLNode * ptNew( nullptr );
    try
    {
        ptNew = new SLLNode;
    }
    catch ( std:: bad_alloc& e)
    {
        std::cerr << "[pushFront()]: Falha da alocação de um novo nó!"
        throw e;
    }

    // Preencher o novo.
    ptNew->miData = _newVal;
    ptNew->mpNext = nullptr;

    // Caso especial, lista vazia (primeira inserção).
    if ( _pAIL == nullptr )
    {
        _pAIL = ptNew;
    }
    else // Caso regular, a lista possui pelo menos 1 elemento.
    {
        ptNew->next = _pAIL // Aponta para o (antigo) primeiro.
        _pAIL = ptNew; // O novo noh passa a ser o primeiro da lista;
    }

    return true;
}


bool pushBack( SNPtr & _pAIL, int _newVal )
{
    // Ponteiro de trabalho usado para percorrer a lista
    SLLNode *pWork( _pAIL );


    return true;
}


bool popFront( SNPtr & _pAIL, int & _retrievedVal )
{
    return true;
}


bool popBack( SNPtr & _pAIL, int& _retrievedVal )
{
    return true;
}


SNPtr find( const SNPtr _pAIL, int _targetVal )
{
    return NULL;
}


bool insert( SNPtr & _pAIL, SNPtr _pAnte, int _newVal )
{
    return true;
}


bool remove( SNPtr & _pAIL, SNPtr _pAnte, int & _retrievedVal )
{
    return true;
}


//**** ===================[ End of les_v1.cpp ]=================== ****//
