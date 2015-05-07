#include "hashtbl.h"

namespace MyHashTable {

    template< typename KeyType, typename DataType, typename KeyHash, typename KeyEqual >
    HashTbl<KeyType,DataType,KeyHash,KeyEqual>::HashTbl( int _Sz )
    : mSize( _Sz ), mCount( 0u )
    {
        // Alocar a tabela.
        try{
        mpDataTable = new std::list< Entry > [ mSize ];
        }
        catch( const std::bad_alloc & ba ) {
            std::cerr << "[HashTbl()] Falha na alocacao!\n";
            throw( ba );
        }
    }

    template< typename KeyType, typename DataType, typename KeyHash, typename KeyEqual >
    HashTbl<KeyType,DataType,KeyHash,KeyEqual>::~HashTbl( )
    {
        delete [] mpDataTable;
    }

    template< typename KeyType, typename DataType, typename KeyHash, typename KeyEqual >
    bool HashTbl<KeyType,DataType,KeyHash,KeyEqual>::insert( const KeyType & _k, const DataType & _d )
    {
        auto bDataFound(false);
        // Instanciar o functor para calculo da funcao hash do cliente.
        KeyHash hashFunc;
        // Instanciar a functor para comparar chaves.
        KeyEqual equal;


        // Aplicar hash duplo para calcular o endereco primario.
        auto idx = hashFunc( _k ) % mSize;

        // Usar o indice calculado para verificar se o elemento existe.
        // Se nao existir, devemos inserir.
        // Se existir, vamos altera-lo.

        //mpDataTable[ idx ]
        // Iterador para o comeco da lista de colisao associada ao
        // endereco calculado pela funcao hash (dupla).
        typename std::list< Entry >::iterator it = mpDataTable[ idx ].begin();
        for( ; it != mpDataTable[ idx ].end() ; ++it )
        {
            // Achei a chave???
            //if( _k == it->mKey )
            if( true == equal(_k,it->mKey) )
            {
                // Sobrescrever os dados associados com a chave repetida.
                it->mData = _d;
                bDataFound = true;
                break;
            }
        }

        // Se cheguei aqui quer dizer que a chave nao existe.
        // Devemos inserir;
        if ( !bDataFound )
        {
            Entry newAccount( _k, _d );
            mpDataTable[ idx ].push_back( newAccount );
            mCount++;
        }

        return bDataFound;
    }

    template< typename KeyType, typename DataType, typename KeyHash, typename KeyEqual >
    void HashTbl<KeyType,DataType,KeyHash,KeyEqual>::print()
    {
        // Percorrer cada endereco da tabela.
        for( auto i(0u) ; i < mSize ; ++i )
        {
            std::cout << "[" << i << "]->" ;
            typename std::list< Entry >::const_iterator cit = mpDataTable[ i ].begin();
            for( ; cit != mpDataTable[ i ].end() ; ++cit )
                std::cout << cit->mData << std::endl;

            std::cout << std::endl;
        }
    }
}
