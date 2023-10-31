#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, cont, soma;
    double media;

    cout << "Quantos elementos voce vai digitar? ";
    cin >> n;

    int vet[n];

    for (int i=0;i<n;i++){

        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    soma = 0;
    cont = 0;


    for (int i=0;i<n;i++){
        if (vet[i] % 2 == 0){
            cont = cont + 1;
            soma = soma + vet[i];
        }
    }

    if ( cont == 0){

        cout << "NENHUM NUMERO PAR" << endl;
    }
    else {

        media = (double) soma / cont;

        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = ";
        cout << media << endl;
    }


    return 0;
}
