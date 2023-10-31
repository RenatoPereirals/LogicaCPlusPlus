#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quant;
    double preco, dinheiro, troco;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quant;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    troco = dinheiro - preco * quant;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco;

    return 0;
}
