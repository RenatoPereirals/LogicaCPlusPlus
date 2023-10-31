#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int idade, soma, cont;
    double media;

    cout << "Digite as idades: " << endl;
    cin >> idade;

    if (idade < 0){
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else{

        soma = 0;
        cont = 0;

        while(idade >= 0){

            cont = cont + 1;
            soma =  soma + idade;

            cin >> idade;

        }

        media = (double) soma / cont;

        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media;
    }
    return 0;
}
