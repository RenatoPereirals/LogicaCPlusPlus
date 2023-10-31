#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int codigo, qtd;
    double valor, total;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> qtd;



       total = 0;
            if (codigo == 1) {
                total = qtd * 5.00;
            }
            else if (codigo == 2) {
                total = qtd * 3.50;
            }
            else if (codigo == 3) {
                total = qtd * 4.80;
            }
            else if (codigo == 4) {
                total = qtd * 8.90;
            }
            else if (codigo == 5) {
                total = qtd * 7.32;
            }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total;

    return 0;
}
