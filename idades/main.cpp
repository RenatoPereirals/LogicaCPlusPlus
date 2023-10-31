#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2, soma;
    double media;

    cout << "Dados da primeira pessoa: "<< endl;
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa: " << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "idade: ";
    cin >> idade2;

    soma = idade1 + idade2;
    media = (double)soma / 2;

    cout << fixed << setprecision (1);
    cout << "A idade media de " <<nome1 << " e " << nome2 << " e de " << media << " anos ";


    return 0;
}
