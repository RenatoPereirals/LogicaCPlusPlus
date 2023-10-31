#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    double media, soma, menor, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nome[n];
    int idade[n];
    double altura[n];

    for (int i=0;i<n;i++){

        cout << "dados da "<< i+1 << "a pessoa" << endl;

        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);

        cout << "Idade: ";
        cin >> idade[i];

        cout << "ALtura: ";
        cin >> altura[i];

    }

    soma = 0;

    for (int i=0;i<n;i++){

        soma = soma + altura[i];
    }

    media = soma / n;

    cout << fixed << setprecision(2);
    cout << "Altura media: ";
    cout << media << endl;

    menor = 0;

    for (int i=0;i<n;i++){

        if (idade[i] < 16){
            menor = menor + 1;
        }
    }

    porcentagem = (double) menor / n * 100;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: ";
    cout << porcentagem << "%" << endl;

    for (int i=0;i<n;i++){

        if (idade[i]<16){
            cout << nome[i]<< endl;
        }
    }

    return 0;
}
