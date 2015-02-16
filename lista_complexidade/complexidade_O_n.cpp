// soma máxima - complexidade O(n)

#include <iostream>
using namespace std;


int maxSum( int x[], int n )
{
	int i;
	int max;
	int acc = 0;

	for ( i = 0;i < n;i++ )
    {
		acc+=x[i];
		if(acc > max) max=acc;
		if(acc < 0) acc=0;
	}

    return max;
}



int main ()
{
	int n, x[n];

	cin>>n;

	for ( int c = 0; c<n; c++ )
    {
		cin>>x[c];
	}

	cout << "Resposta: " << maxSum(x, n) << endl;

    return 0;

}


