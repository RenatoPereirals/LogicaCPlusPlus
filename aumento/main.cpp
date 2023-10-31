#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double salario, novoSalario, porcentagem, aumento;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    if (salario < 1000){
        novoSalario = salario * 1.2;
    }
    else if (salario < 3000){
        novoSalario = salario *1.15;
    }
    else if(salario <= 8000){
        novoSalario = salario * 1.1;
    }
    else {
        novoSalario = salario * 1.05;
    }

    aumento = novoSalario - salario;
    porcentagem = aumento / salario * 100.0;

    cout << fixed << setprecision(2);
    cout << "Novo salario = R$ " << novoSalario << endl;
    cout << "Aumento = R$ " << aumento << endl;
    cout << "Porcentagem = " << (int) porcentagem << "%";

    return 0;
}
