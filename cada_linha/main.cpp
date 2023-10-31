#include <iostream>

using namespace std;

int main()
{

    int n, maior;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int vet[n];
    int mat[n][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for (int i=0;i<n;i++){

            maior = mat[0][0];

        for (int j=0;j<n;j++){
            if (maior < mat[i][j]){
                maior = mat[i][j];
            }
        vet[i] = maior;
        }
    }
    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;

    for (int i=0;i<n;i++){
        cout << vet[i] << endl;
    }

    return 0;
}
