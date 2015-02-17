// soma máxima - complexidade n(n)

#include <iostream>
using namespace std;


int maxSum( int x[], int n )
{

    register int i, j;
    int max = 0;
    int sum = 0;

    for ( i = 0; i < n; i++ )
    {
        for ( j = 0; j <= i; i++ )
        {
            sum += x[j];
        }

        if ( sum > max ) max = sum;
        if ( sum < 0) sum = 0;
    }

    return max;
}



int main ()
{
    int n;
    int * x = NULL;

    cin >> n;

    x = new int[n];

    for ( int c = 0; c<n; c++ )
    {
       cin >> x[c];
    }

    cout << "Resposta: " << maxSum(x, n) << endl;

    return 0;

}
