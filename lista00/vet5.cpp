#include <iostream>

using namespace std;

void printVector( const int* a );

int main()
{
    int *A;
    int *B;
    int i, number, a_index = 0, b_index = 0;

    A = new int[5];
    B = new int[5];

    for ( i = 0; i < 30; i++ )
    {
        cout << "Informe o número " << i + 1 << endl;
        cin >> number;

        if ( number % 2 == 0 )
        {
            A[a_index++] = number;
            if (a_index > 5)
            {
                a_index = 0;
                printVector(A);
            }
        }
        else
        {
            B[b_index++] = number;
            if (b_index > 5)
            {
                b_index = 0;
                printVector(B);
            }
        }
    }

    return 0;
}

void printVector( const int* a )
{
    cout << "[ ";
    for (int i = 0; i < 5; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}
