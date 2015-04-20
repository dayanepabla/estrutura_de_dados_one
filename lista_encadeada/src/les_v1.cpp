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
    SLLNode * pWork = _pAIL; // SLLNode * pWork;
    std::cout << "{ ";
    while ( pWork != NULL )
    {
        std::cout << pWork->miData << " ";
        pWork = pWork->mpNext;
    }
    if ( _pAIL == NULL )
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
    while ( pWork != NULL )
    {
        ct++;
        pWork = pWork->mpNext;
    }

    return ct;
}


bool empty( const SNPtr _pAIL )
{
    return ( _pAIL == NULL );
}


void clear( SNPtr & _pAIL )
{
    SLLNode * pAux;
    SLLNode * pWork = _pAIL; // SLLNode * pWork;
    while ( pWork != NULL )
    {
        pAux = pWork; // Guarda/marca o nó a ser eliminado.
        pWork = pWork->mpNext; // Vamos para o próximo...
        delete pAux; // Remove o marcado.
    }
    _pAIL = NULL; // Precisamos fazer o head do cliente apontar para nulo.
}


bool front( const SNPtr _pAIL, int & _retrievedVal )
{
    // Se a lista for vazia?
    if ( _pAIL == NULL )
        return false;
    _retrievedVal = _pAIL->miData;
    return true;
}


bool back( const SNPtr _pAIL, int & _retrievedVal )
{
    SLLNode * pWork = _pAIL;
    // Avanço até o último.
    while ( pWork != NULL )
    {
        // Será que este é o último?
        if ( pWork->mpNext == NULL )
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

    SLLNode * ptNew( NULL );
    try
    {
        ptNew = new SLLNode;
    }
    catch ( std:: bad_alloc& e)
    {
        std:: cerr << "[pushFront()]: Falha da alocação de um novo nó!";
        throw e;
    }

    // Preencher o novo.
    ptNew->miData = _newVal;
    ptNew->mpNext = NULL;

    // Caso especial, lista vazia (primeira inserção).
    if ( _pAIL == NULL )
    {
        _pAIL = ptNew;
    }
    else // Caso regular, a lista possui pelo menos 1 elemento.
    {
        ptNew->mpNext = _pAIL; // Aponta para o (antigo) primeiro.
        _pAIL = ptNew; // O novo noh passa a ser o primeiro da lista;
    }

    return true;
}


bool pushBack( SNPtr & _pAIL, int _newVal )
{
    // Ponteiro de trabalho usado para percorrer a lista
    SLLNode *ptNew( NULL );
    try
    {
        ptNew = new SLLNode;
    }
    catch ( std:: bad_alloc e)
    {
        std:: cerr << "[pushBack()]: Falha de alocação de um novo nó!";
        throw e;
    };

    ptNew->miData = _newVal;
    ptNew->mpNext = NULL;

    if ( _pAIL == NULL )
    {
        _pAIL = ptNew;
    }
    else
    {
        SNPtr pAux = _pAIL;
        while ( _pAIL != NULL )
        {
            if ( pAux->mpNext == NULL )
            {
                pAux->mpNext = ptNew;
                break;
            }
            else
            {
                pAux = pAux->mpNext;
            }
        }
    }


    return true;
}


bool popFront( SNPtr & _pAIL, int & _retrievedVal )
{
    // Se a lista for vazia?
    if ( _pAIL == NULL )
        return false;

    _retrievedVal = _pAIL->miData;
    _pAIL = _pAIL->mpNext;
    return true;
}


bool popBack( SNPtr & _pAIL, int& _retrievedVal )
{
    // SNPtr pAux = _pAIL;
    // SNPtr pNext = NULL;

    // if ( _pAIL == NULL )
    //     return false;
    // while ( _pAIL != NULL )
    // {

    // }

    return true;
}


SNPtr find( const SNPtr _pAIL, int _targetVal )
{
    if ( empty( _pAIL) )
        return NULL;

    SNPtr pFound = NULL;
    SNPtr pAux = _pAIL;

    while (pAux->mpNext != NULL && pAux->miData != _targetVal)
    {
        if ( pAux->miData == _targetVal )
        {
            pFound = pAux;
            break;
        }

        pFound = pAux;
        pAux = pAux->mpNext;
    }

    return pFound;
}


bool insert( SNPtr & _pAIL, SNPtr _pAnte, int _newVal )
{
    SLLNode *ptNew( NULL );
    try
    {
        ptNew = new SLLNode;
        ptNew->miData = _newVal;
    }
    catch ( std:: bad_alloc e)
    {
        std:: cerr << "[pushBack()]: Falha de alocação de um novo nó!";
        throw e;
    };

    if ( _pAnte == NULL )
    {
        _pAIL = ptNew;
    }
    else
    {
        ptNew->mpNext = _pAnte->mpNext;
        _pAnte->mpNext = ptNew;
    }

    return true;
}


bool remove( SNPtr & _pAIL, SNPtr _pAnte, int & _retrievedVal )
{
    if ( _pAnte == NULL )
    {
        _pAIL = NULL;
    }
    else
    {
        SNPtr pAfter = NULL;

        pAfter = _pAnte->mpNext;
        _pAnte->mpNext = pAfter->mpNext;
    }

    return true;
}


//**** ===================[ End of les_v1.cpp ]=================== ****//
