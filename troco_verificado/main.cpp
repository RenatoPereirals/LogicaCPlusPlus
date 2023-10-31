#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quant;
    double preco, troco, total, dinheiro;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quant;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    total = preco * quant - dinheiro;

    cout << fixed << setprecision(2);
    if (total < 0){
        troco = total;
        cout << "TROCO " << troco;
    }
    else{
        troco = quant * preco - dinheiro;
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << troco << " REAIS";
    }


    return 0;
}
