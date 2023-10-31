#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double soma, media;

    cout << "Quantos elementos voce vai digitar? ";
    cin >> n;

    double vet[n];

    soma = 0;

    for (int i=0;i<n;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for (int i=0;i<n;i++){
        soma = soma + vet[i];
    }

    cout << "VALORES = ";
    cout << fixed << setprecision(1);

    for (int i=0;i<n;i++){
        cout << vet[i] << " ";
    }

    cout <<endl;
    media = (double) soma / n;

    cout << fixed << setprecision(2);
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}
