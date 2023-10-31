#include <iostream>

using namespace std;

int main()
{
    int codigo, contAlcool, contGasolina, contDisel;

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> codigo;

    contAlcool = 0;
    contGasolina = 0;
    contDisel = 0;

    while (codigo != 4){
        if (codigo == 1){
          contAlcool = contAlcool + 1;
        }
        if (codigo == 2){
          contGasolina = contGasolina + 1;
        }
        if (codigo == 3){
          contDisel = contDisel + 1;
        }
        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> codigo;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << contAlcool << endl;
    cout << "Gasolina: " << contGasolina << endl;
    cout << "Disel: " << contDisel << endl;

    return 0;
}
