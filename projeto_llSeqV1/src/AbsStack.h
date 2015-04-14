// UnderflowException thrown as needed.

template <class Object>
class Stack : public AbsStack< Object >
{
    public:
        explicit Stack( int _iSz = 20 ) :
            mp_Data( nullptr ),
            mi_Top( 0 ),
            mi_Capacity( _iSz )
        {
            mp_Data = new Object[ mi_Capacity ];
        }

        ~Stack()
        {
            delete [] mp_Data;
        }

        void push( const Object & x);
        const Object & pop

};
