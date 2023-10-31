#include <iostream>

using namespace std;

int main()
{
    double nota1, nota2, soma;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    soma = nota1 + nota2;
    cout << "NOTA FILNAL = " << soma << endl;

    if (soma < 60 ){
        cout << "REPROVADO" << endl;
    }

    return 0;
}
