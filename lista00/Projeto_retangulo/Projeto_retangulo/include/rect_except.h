#ifndef RECT_EXCEPT_H_
#define RECT_EXCEPT_H_

#include <iostream>
using std::cout;

#include <string>
using namespace std;

namespace rectangle {

//! Classe cria a classe de exce&ccedil;&otilde;s geradas pela classe Rect.
class RectDException
{
  public:
      //! Inicializa o membro msg com uma string vazia.
      /*! Inicializa o membro msg com uma string vazia.
       * @param msg Mensagem de erro.
       */
    RectDException( const string & msg = "" ) : message( msg )
      { }
    //! Destrutor virtual, n&atilde;o faz nada.
    virtual ~RectDException( )
      { }

    //! Simplesmente formata a mensagem de erro, indicando que &eacute; uma exception
    /*! Formata mensagem de erro: "Exception: XXXX gerada!", onde o XXX &eacute; a mensagem de erro armazenada na classe.
     * @return A mensagem de erro formatada.
     */
    virtual string toString( ) const
      { return "Exception " + string( ": " ) + what( ); }

      //! Recupera a mesagem de erro armazenada na classe.
      /*! @return A mensagem de erro original (sem formata&ccedil;&atilde;o).
       * @see toString().
       */
    virtual string what( ) const
      { return message; }

  private:
    //! String para conter a mensagem de erro.
    string message;
};


//! Classe erro usada para indicar acesso do vetor fora dos &iacute;ndices permitido [0,3].
class OutOfBoundsException: public RectDException 
{
  public:
      //! Exce&ccedil;&atilde;o gerada quando se tenta acessar elementos fora do limite do ret&acirc;ngulo [0,3] usando o operator[].
    OutOfBoundsException( const string & msg = "Acces to element out of bounds!" ) : RectDException( msg )
      { }
};

//! Classe erro usada para indicar que o cliente forneceu dimensoes negativas ao criar um ret&acirc;ngulo
class NegativeDimensionsException: public RectDException 
{
  public:
      //! Exce&ccedil;&atilde;o gerada quando é fornecido valores negativos para largura e/ou algura.
    NegativeDimensionsException( const string & msg = "Negative dimensions (width or height) are not allowed!" ) : RectDException( msg )
      { }
};
} // namespace rectangle

#endif
