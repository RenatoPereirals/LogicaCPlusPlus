#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    double menorAltura, maiorAltura, media, cont, qhomem, soma;

    cout << "Quantas pessoa serao digitadas? ";
    cin >> n;

    char genero[n];
    double altura[n];

    for (int i=0;i<n;i++){

        cout << "Altura da " << i+1 << "a pessoa: ";
        cin >> altura[i];

        cout << "Genero da " << i+1 << "a pessoa: ";
        cin >> genero[i];
    }

    menorAltura = altura[0];

    for (int i=1;i<n;i++){

        if (menorAltura > altura[i]){
            menorAltura = altura[i];
        }
    }

    maiorAltura = altura[0];
     for (int i=1;i<n;i++){

        if (maiorAltura < altura[i]){
            maiorAltura = altura[i];
        }
    }

    soma = 0;
    cont = 0;

    for (int i=0;i<n;i++){
        if (genero[i] == 'F'){

            soma = soma + altura[i];
            cont = cont + 1;
        }
    }

    qhomem = n - cont;
    media = soma / cont;

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menorAltura << endl;
    cout << "Maior altura = " << maiorAltura << endl;
    cout << "Media das alturas das mulheres = " << media <<endl;
    cout << "Numero de homens = " << (int)qhomem << endl;


    return 0;
}
