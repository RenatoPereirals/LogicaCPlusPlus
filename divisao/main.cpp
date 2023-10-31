#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double numerador, denominador, divisao;


    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    cout << fixed << setprecision(2);

    for (int i=0;i<n;i++){

        cout << "Entre com o numerador: ";
        cin >> numerador;
        cout << "Enre com o denominador ";
        cin >> denominador;

        if (denominador == 0){

            cout << "DIVISAO IMPOSSIVEL" << endl;

        }
        else{

            divisao = numerador / denominador;
            cout << "DIVISAO = " << divisao << endl;

        }
    }

    return 0;
}
