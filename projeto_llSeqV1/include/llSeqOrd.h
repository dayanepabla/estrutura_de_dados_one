/**
 * An implementation of the abstract class LLSeq that keeps
 * all elements in order.
 *
 * Author: Dayane Pabla
 * Date: April 21th, 2015
 * */

#ifndef _LLSEQORD_H_
#define _LLSEQORD_H_

#include "llSeq.h"

class LLSeqOrd : public LLSeq
{
    private:
        int buscaAux( Chave _x ) const;

    public:
        bool insercao( Chave _novaId, Informacao _novaInfo );
};

#endif
