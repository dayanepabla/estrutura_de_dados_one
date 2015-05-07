#ifndef _HASHTBL_H_
#define _HASHTBL_H_

#include <iostream>
#include <list>

using namespace std;

namespace MyHashTable {

    template<class KeyType, class DataType>
    class HashEntry {
        public:

            KeyType mKey; // Armazena a chave associada a informação.
            DataType mData; // A informação.

            HashEntry( KeyType _ky, DataType _dt ) : mKey( _kt ), mData( _dt )
            {/*Empty*/}
    };

    template<class KeyType, class DataType>
    class HashTbl
    {
        public:
            typedef HashEntry<KeyType,DataType> Entry;

            HashTbl( int _TableSz = DEFAULT_SIZE );
            virtual ~HashTbl();

            bool insert( const KeyType &, const DataType & );
            bool retrieve( const KeyType &, DataType & ) const;
            // bool remove()
            // void clear()
            // bool empty()
            unsigned int count() const { return mCount; }

        private:
            unsigend int mSize; //!< Tamanho da tabela.
            unsigend int mCount; //!< Número de elementos da tabela.
            std::list< Entry > *mpDataTable //!< Tabela de listas para entradas de tabela.
            static const short DEFAULT_SIZE = 10;
    };

} // MyHashTable
#include "hashtbl.cpp"
#endif
