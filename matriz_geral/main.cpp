#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    int n, linha, coluna;
    double soma;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double mat[n][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    soma = 0;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (mat[i][j] > 0){

                soma = soma + mat[i][j];
            }
        }
    }

    cout << endl;

    cout << fixed << setprecision(1);
    cout << "SOMA DOS POSITIVOS: ";
    cout << soma << endl;

    cout << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";

    for (int j=0;j<n;j++){

        cout << mat[linha][j] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";

    for (int i=0;i<n;i++){

        cout << mat[i][coluna] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "DIAGONAL PRINCIPAL: ";

    for (int i=0;i<n;i++){

       cout << mat[i][i] << " ";
    }

    cout << endl;
    cout << endl;


    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (mat[i][j] < 0){

                mat[i][j] = pow(mat[i][j],2);
            }
        }
    }

     cout << "MATRIZ ALTERADA:" << endl;

     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){

           cout << mat[i][j] << " ";
        }
    cout << endl;
    }


    return 0;
}
