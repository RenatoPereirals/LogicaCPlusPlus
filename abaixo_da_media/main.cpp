#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double soma, media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vet[n];

    for (int i=0;i<n;i++){

        cout << "Digite um elemento: ";
        cin >> vet[i];
    }

    soma = 0;

    for (int i=0;i<n;i++){

        soma = soma + vet[i];
    }

    media = soma / n;

    cout << endl;

    cout << fixed << setprecision(3);
    cout << "MEDIA DO VETOR = ";
    cout << media << endl;

    cout << fixed << setprecision(1);
    cout << "ELEMENTOS ABAIXO DA MEDIA:"<< endl;
    for (int i=0;i<n;i++){
        if (vet[i]<media){

            cout << vet[i] << endl;
        }
    }

    return 0;
}
