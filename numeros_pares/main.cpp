#include <iostream>

using namespace std;

int main()
{
    int n, cont;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];


    for (int i=0;i<n;i++){

        cout << "Digite uma numero: ";
        cin >> vet[i];
    }
    cont = 0;

    cout << endl;
    cout << "NUMEROS PARES: " << endl;

    for (int i=0;i<n;i++){

        if (vet[i] % 2 == 0){
            cont = cont + 1;
            cout << vet[i] << " ";
        }
    }

    cout << endl;
    cout << endl;
    cout << "QUANTIDADE DE PARES = ";
    cout << cont;


    return 0;
}
