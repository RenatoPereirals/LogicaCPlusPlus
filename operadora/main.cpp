#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int minutos;
    double valor;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos > 100){
        valor = (double)((minutos - 100) * 2) + 50;
    }
    else {
        valor = 50;
    }
    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor;

    return 0;
}
