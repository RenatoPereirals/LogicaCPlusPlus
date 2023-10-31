#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{

    int n, abaixo, entre, acima;
    double tLucro, lucro, tCompra, tVenda;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    string produto[n];
    double pCompra[n], pVenda[n];

    for (int i=0;i<n;i++){

        cout << "Produto " << i+1 << ": " << endl;

        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline (cin, produto[i]);

        cout << "Preco de compra: ";
        cin >> pCompra[i];

        cout << "Preco de venda: ";
        cin >> pVenda[i];

    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for (int i=0;i<n;i++){

        lucro = (double) (pVenda[i] - pCompra[i]) / pCompra[i] * 100;

        if(lucro < 10){
            abaixo = abaixo + 1;
        }
        else if (lucro <= 20){
            entre = entre + 1;
        }
        else{
            acima = acima + 1;
        }
    }

    tCompra = 0;
    tVenda = 0;

    for (int i=0;i<n;i++){

        tCompra = tCompra + pCompra[i];
        tVenda = tVenda + pVenda[i];
    }

    tLucro = tVenda - tCompra;


    cout << endl;
    cout << endl;
    cout << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: ";
    cout << abaixo << endl;
    cout << "Lucro entre 10% e 20%: ";
    cout << entre << endl;
    cout << "Lucro acima de 20%: ";
    cout << acima << endl;

    cout << fixed << setprecision(2);
    cout << "Valor total de compra: ";
    cout << tCompra << endl;
    cout << "Valor total de venda: ";
    cout << tVenda << endl;
    cout << "Lucro total: ";
    cout << tLucro << endl;

    return 0;
}
