#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> m;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> n;

    int A[m][n], B[m][n], C[m][n];

    cout << "Digite os valores da matriz A:" << endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Digite os valores da matriz B:" << endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){

            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "MATRIZ SOMA:" << endl;

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){

            cout << C[i][j] << " ";
        }
    cout << endl;
    }

    return 0;
}
