#include <iostream>

using namespace std;

int
maiores( const int* const vet, const int n, const int x )
{
    int maior = x;
    int i;
    int cont = 0;

    for (i = 0; i < n; i++)
    {
        if ( vet[i] >= maior )
        {
            cont++;
        }
    }

    return cont;
}


int main()
{
    int n, x;
    int *vet = NULL;

    cout << "Informe quantos números deseja verificar: " << endl;
    cin >> n;

    cout << "Informe um valor: " << endl;
    cin >> x;

    for ( int i(0); i < n; ++i )
    {
        cout << "Informe o número " << i + 1 << endl;
        cin >> vet[ i ];
    }

    cout << "Total de números na sequência maiores que o valor informado: " << maiores(vet, n, x) << endl;
    return 0;
}




