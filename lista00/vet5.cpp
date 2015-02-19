#include <iostream>

using namespace std;

int main()
{
    int A[5];
    int B[5];
    int i, num;
    int cont = 0;

    for ( i = 0; i < 30; i++)
    {
        cout << "Informe o número " << i + 1 << endl;
        cin >> num;
        while (cont < 5)
        {

            if (num % 2 == 0)
        {

            A[i] = num;
            cout << "[";
            cout << A[i] << " ";
            cout << "]\n";
        } else {

            B[i] = num;
            cout << "[";
            cout << B[i] << " ";
            cout << "]\n";
        }
            cont++;
        }


    }

    return 0;
}
