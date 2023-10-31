#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double largura, comprimento, valor, area, total;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valor;

    area = comprimento * largura;
    total = area * valor;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area;
    cout << "\nValor do terreno = " << total;

    return 0;
}
