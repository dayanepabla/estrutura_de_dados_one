#include "llSeqOrd.h"

int LLSeqOrd::buscaAux( LLSeqOrd::Chave _x ) const
{
    for (int i = 0; i < mi_Length; ++i)
    {
        if (mpt_Data[i].id == _x)
            return i;
    }

    return -1;
}

bool LLSeqOrd::insercao( LLSeqOrd::Chave _novaId, LLSeqOrd::Informacao _novaInfo )
{
    // A chave já existe, então não adicionamos.
    if (buscaAux(_novaId) == -1)
        return false;

    NoLLSeq node;
    node.id = _novaId;
    node.info = _novaInfo;

    if (isEmpty())
    {
        mpt_Data[0] = node;
    }
    else
    {
    }

    return true;
}
