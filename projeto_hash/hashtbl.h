#ifndef _HASHTBL_H_
#define _HASHTBL_H_

#include <iostream>
#include <list>

using namespace std;

namespace MyHashTable {

    template<class KeyType, class DataType>
    class HashEntry {

        public:

            KeyType mKey;  // Armazena a chave associada a informcao
            DataType mData;// A informacao.

            HashEntry( KeyType _kt, DataType _dt ) : mKey(_kt), mData(_dt)
            {/*Empty*/}
    };

    template< class KeyType,
              class DataType,
              class KeyHash = std::hash< KeyType >,
              class KeyEqual = std::equal_to< KeyType > >
    class HashTbl
    {
        public:
        typedef HashEntry<KeyType,DataType> Entry;

        HashTbl( int _TableSz = DEFAULT_SIZE );
        virtual ~HashTbl();

        bool insert( const KeyType &, const DataType &  );
        bool retrieve( const KeyType &, DataType & ) const;
        // bool remove()
        // void clear()
        // bool empty()
        unsigned int count() const { return mCount; }

        void print();

        private:
        unsigned int mSize; //!< Tamanho da tabela.
        unsigned int mCount;//!< Numero de elementos na tabel.
        std::list< Entry > *mpDataTable; //!< Tabela de listas para entradas de tabela.
        static const short DEFAULT_SIZE = 10;

    };

} // MyHashTable
#include "hashtbl.cpp"
#endif
