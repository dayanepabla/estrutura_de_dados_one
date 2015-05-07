#include <iostream>
#include <functional>
#include <tuple>

#include "hashtbl.h"

using namespace MyHashTable;

// Tipo conta-corrente.
struct Account
{
  std::string mClientName;
  int mBankCode;
  int mBranchCode;
  int mNumber;
  float mBalance;

  // Nickname for the account key.
  typedef int AcctKey;
  //typedef std::pair<std::string, int> AcctKey;

  Account( std::string _n = "<empty>",
         int _bnc = 1, // Banco do Brasil.
         int _brc = 1668, // Ag. Campus UFRN
       int _nmr = 0, // Numero da conta
       float _bal = 0.f ) // Saldo
  : mClientName( _n ),
    mBankCode( _bnc ),
    mBranchCode( _brc ),
    mNumber( _nmr ),
    mBalance( _bal )
  { /* Empty */ }

  // Retorna a chave associada com a conta-corrente.
  AcctKey getKey()
  {
    return mNumber;
    //return std::pair< std::string, int >( mClientName, mNumber );
  }

  // DEBUG: Imprime uma formatacao para a conta-corrente.
  inline friend std::ostream &operator<< ( std::ostream & _os, const Account & _acct )
  {
    _os << "[ Client: <" << _acct.mClientName <<
         "> Bank: <"   << _acct.mBankCode <<
               "> Branch: <" << _acct.mBranchCode <<
               "> Number: <" << _acct.mNumber <<
               "> Balance: <" << _acct.mBalance << "> ]";
    return _os;
  }
};

struct KeyHash
{
  std::size_t operator()( const Account::AcctKey & _k ) const
  {
    std::cout << ">>> [KeyHash()]: key = " << std::hash< int >()( _k ) << std::endl;
    return std::hash< int >()( _k );

  //  return std::hash< string >() ( _k.first ) ^
  //      (std::hash< int >()( _k.second) << 3 );

  }
};

struct KeyEqual
{
  bool operator()( const Account::AcctKey & _lhs, const Account::AcctKey & _rhs ) const
  {
    return ( _lhs == _rhs );
    //return ( _lhs.first == _rhs.first && _lhs.second == _rhs.second );
  }
};









int main() {

  Account acct("Alex Bastos", 1, 1668, 54321, 1500.f);
  Account myAccounts[] = {
    {"Alex Bastos", 1, 1668, 54321, 1500.f},
    {"Aline Souza", 1, 1668, 45794, 530.f},
    {"Cristiano Ronaldo", 13, 557, 87629, 150000.f},
    {"Jose Lima", 18, 331, 1231, 850.f},
    {"Saulo Cunha", 116, 666, 1, 5490.f}
  };

  // Cria uma tabela de dispersao com capacidade p 23 elementos
  HashTbl< Account::AcctKey, Account, KeyHash, KeyEqual > contas( 23 );

  contas.insert( myAccounts[2].getKey(), myAccounts[2] );
  contas.insert( myAccounts[0].getKey(), myAccounts[0] );
  contas.insert( myAccounts[3].getKey(), myAccounts[3] );
  contas.insert( myAccounts[1].getKey(), myAccounts[1] );
  contas.insert( myAccounts[4].getKey(), myAccounts[4] );

  contas.print();

#ifdef _NOT_NOW

  // Em um segundo momento...
  Account conta1;

  constas.retrieve( myAccounts[2].getKey(), conta1 );
  std::cout << conta1.mClientName << std::endl;
#endif



  //auto nAccts( sizeof(myAccounts) / sizeof(Account) );

  std::cout << ">>> Contas: " << std::endl;

  for( auto & e : myAccounts )
    std::cout << e << std::endl;

  return EXIT_SUCCESS;
}
