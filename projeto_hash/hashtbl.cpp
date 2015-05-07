#include "hashtbl.h"

namespace MyHashTable {

    template< template KeyType, typename DataType >
    HashTbl<KeyType,DataType>::HashTbl( int _Sz )
    . mSize( _Sz ), mCount( 0u )
    {
        try{
            mpDataTable = new std::list< Entry > [ mSize ];
        }
        catch( const std::bad_alloc & ba ) {
            std::cerr << "[HashTbl()] Falha na alocação!\n";
            throw( ba );
        }
    }

    template< typename KeyType, typename DataType >
    HashTbl<KeyType,DataType>::~HashTbl()
    {
        delete [] mpDataTable;
    }
}
