#include <iostream>
#include <functional>
#include <tuple>

#include "hashtbl.h"

using namesoace MyHashTable;

struct Account
{
    std::string mClienteName;
    int mBankCode;
    int mBranchCode;
    int mNumber;
    float mBalance;

    // Nickname for the account key.
    typedef if AcctKey;

    Account( std::string _n = "<empty>",
            int _bnc = 1, // Banco do Brasil.
            int _brc = 1668, // Ag. Campus UFRN
            int _nmr = 0, // Número da conta.
            float _bal = 0.f ) // Saldo.
    : mClienteName( _n ),
      mBankCode( _bnc ),
      mBranchCode( _brc ),
      mNumber( _nmr ),
      mBalance( _bal )
    { /* Empty */ }

    AcctKey getKey()
    {
        return mNumber;
        // return std::pair< std::string, int >( mClienteName, mNumber );
    }

    inline friend std::ostream &operator<< (std::ostream & _os, const Account  & _acct )
    {
        _os << "[ Client: <" << _acct.mClienteName <<
            "> Bank: <"      << _acct.mBankCode <<
            "> Branch: <"    << _acct.mBranchCode <<
            "> Number: <"    << _acct.mNumber <<
            "> Balance: <"   << _acct.mBalance << "> ]";
        return _os;
    }
};

int main()
{
    Account acct("Alex Bastos", 1, 1668, 54321, 1500.f);
    Account myAccounts[] = {
        {"Alex Bastos", 1, 1668, 54321, 1500.f},
        {"Aline Souza", 1, 1668, 56893, 1500.f},
        {"Cristiano Ronaldo", 13, 557, 87629, 150000.f},
        {"João Lima", 18, 331, 1231, 850.f},
        {"Saulo Cunha", 116, 666, 1344, 5490.f}
    };


    // Cria uma tabela de dispersão com capacidade para 23 elementos.
    HashTbl< Account::AcctKey, Account> contas( 23 );

#ifdef _NOT_NOW
    contas.insert( myAccounts[2].getKey, myAccounts[2] );


    // Em um segundo momento...
    Account contal;

    contas.retrive( 201, contal );
    std::cout << contal.mClienteName << std:: endl;

#endif


    //auto nAccts( sizeof(myAccounts) / sizeof(Account) );


    std::cout << ">>> Contas:" << acct << std::endl;

    for( auto & e : myAccounts )
        std::cout << e << std::endl;

    return 0;
}


