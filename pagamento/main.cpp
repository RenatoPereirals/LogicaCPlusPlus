#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string nome;
    double hora, valor, total;

    cout << "nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valor;
    cout << "Horas trabalhadas: ";
    cin >> hora;

    total = valor * hora;

    cout << fixed << setprecision(2);
    cout << "O pagamento de " << nome << " deve ser " << total;


    return 0;
}
