#include "llSeq.h"

LLSeq::LLSeq ( int _MaxSz )
{
    mi_Length = 0;
    mi_Capacity = _MaxSz;
    mpt_Data = new NoLLSeq[mi_Capacity];
}

LLSeq::~LLSeq ()
{
    delete mpt_Data;
}

bool LLSeq::busca ( LLSeq::Chave _x, LLSeq::Informacao &info ) const
{
    for (int i = 0; i < mi_Length; ++i)
    {
        if (mpt_Data[i].id == _x)
        {
            info = mpt_Data[i].info;
            return true;
        }
    }

    return false;
}

bool LLSeq::remocao ( LLSeq::Chave _x, LLSeq::Informacao &info )
{
    NoLLSeq aux;
    int index = buscaAux( _x );

    aux = mpt_Data[mi_Length - 1];
    info = aux.info;
    mpt_Data[mi_Length - 1] = mpt_Data[index];
    mpt_Data[index] = aux;

    --mi_Length;

    return true;
}
