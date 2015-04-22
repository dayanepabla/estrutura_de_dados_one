#include "llSeqReg.h"

int LLSeqReg::buscaAux( LLSeqReg::Chave _x ) const
{
    for (int i = 0; i < mi_Length; ++i)
    {
        if (mpt_Data[i].id == _x)
            return i;
    }

    return -1;
}

bool LLSeqReg::insercao( LLSeqReg::Chave _novaId, LLSeqReg::Informacao _novaInfo )
{
    if (isFull())
        return false;

    NoLLSeq node;
    node.id = _novaId;
    node.info = _novaInfo;

    mpt_Data[mi_Length++] = node;

    return true;
}

bool LLSeqReg::remocao( LLSeqReg::Chave _x, LLSeqReg::Informacao &info )
{
    if (isEmpty())
        return false;

    NoLLSeq aux;
    int index = buscaAux(_x);

    aux = mpt_Data[mi_Length - 1];
    info = aux.info;

    mpt_Data[mi_Length - 1] = mpt_Data[index];
    mpt_Data[index] = aux;

    --mi_Length;

    return true;
}
