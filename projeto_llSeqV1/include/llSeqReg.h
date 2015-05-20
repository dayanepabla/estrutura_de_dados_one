#ifndef _LLSEQREG_
#define _LLSEQREG_

#include "llSeq.h"

class LLSeqReg : public LLSeq
{
    private:
        int buscaAux( Chave _x ) const; // Metodo de busca.

    public:
        bool insercao( Chave _novaId, Informacao _novaInfo );
        bool remocao( Chave _x, Informacao & ); // Remove da lista em Theta(1).
};

#endif
