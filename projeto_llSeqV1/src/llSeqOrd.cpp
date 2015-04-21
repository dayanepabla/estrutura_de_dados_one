#include "llSeq.h"

int LLSeqOrd::buscaAux( LLSeqOrd::Chave _x ) const
{
    for (int i = 0; i < mi_Length; ++i)
    {
        if (mpt_Data[i] == _x)
            return i;
    }

    return -1;
}

bool LLSeqOrd::insercao( LLSeqOrd::Chave _novaId, LLSeqOrd::Informacao _novaInfo )
{
    NoLLSeq node;

    node.id = _novaId;
    node.info = _novaInfo;

    if (mi_Length == 0)
    {
        mpt_Data[0] = node;
    }
    else
    {
        int i = 0;

        while(mpt_Data[i] <= _novaId)
            i++;

        if (i <= mi_Length)
            mpt_Data[i] = node;
    }
}
