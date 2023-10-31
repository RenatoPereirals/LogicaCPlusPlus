#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char tipo;
    int n, qCoelho, qRato, qSapo, qCobaia, totalCobaias;
    double pCoelho, pRato, pSapo;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    qCoelho = 0;
    qRato = 0;
    qSapo = 0;

    for (int i=0;i<n;i++){

        cout << "Quantidade de cobaias? ";
        cin >> qCobaia;
        cout << "Tipo de cobaia: ";
        cin >> tipo;

        if (tipo == 'C'){
            qCoelho = qCoelho + qCobaia;
        }
        else if (tipo == 'R'){
            qRato = qRato + qCobaia;
        }
        else {
            qSapo = qSapo + qCobaia;
        }
    }

    totalCobaias = qCoelho + qRato + qSapo;
    pCoelho = (double) qCoelho / totalCobaias * 100;
    pRato = (double) qRato / totalCobaias * 100;
    pSapo = (double) qSapo / totalCobaias * 100;

    cout << endl;
    cout << "RELATORIO FINAl:" << endl;
    cout << "Total: "<< totalCobaias <<" de cobaias: " << endl;
    cout << "Total de coelhos: " << qCoelho << endl;
    cout << "Total de ratos: " << qRato << endl;
    cout << "Total de sapos: " << qSapo << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << pCoelho << endl;
    cout << "Percentual de ratos: " << pRato << endl;
    cout << "Percentual de sapos: " << pSapo<< endl;

    return 0;
}
