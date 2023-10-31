#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, maiorPosicao;
    double maiorValor;

    cout << "Quantos numeros voce vai digitara? ";
    cin >> n;

    double vet[n];

    for (int i=0;i<n;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maiorValor = vet[0];

    for (int i=1;i<n;i++){
        if (maiorValor < vet[i]){
            maiorValor = vet[i];
            maiorPosicao = i;
        }
    }

    cout << endl;
    cout << fixed << setprecision(1);
    cout << "MAIOR VALOR = ";
    cout << maiorValor << endl;
    cout << "PSICAO DO MAIOR VALOR = ";
    cout << (int) maiorPosicao << endl;


    return 0;
}
