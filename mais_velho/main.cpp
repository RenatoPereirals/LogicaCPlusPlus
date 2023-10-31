#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n, maior, mIdade;


    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nome[n];
    int idade[n];

    for (int i=0;i<n;i++){
        cout << "Dados do " << i+1 << "a paeeosa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Ideda: ";
        cin >> idade[i];
    }

    maior = idade[0];

    for (int i=0;i<n;i++){
        if (maior < idade[i]){
            maior = idade[i];
            mIdade = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nome[mIdade] << endl;

    return 0;
}
