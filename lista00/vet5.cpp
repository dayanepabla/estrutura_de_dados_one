#include <iostream>

using namespace std;

int main()
{
    int A[5];
    int B[5];
    int i;

    for ( i = 0; i < 30; i++)
    {
        cout << "Informe o número " << i + 1 << endl;

        if (i % 2 == 0){
            cin >> A[i];
        } else {
            cin >> B[i];
        }

        if (A[i] == 5){
            cout << "[";
            cout << A[i] << " ";
            cout << "]\n";
        }

        if (B[i] == 5){
            cout << "[";
            cout << B[i] << " ";
            cout << "]\n";
        }


    }

    return 0;
}
