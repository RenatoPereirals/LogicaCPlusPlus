    #include <iostream>

    using namespace std;

    int main()
    {
        int m, n;
        double soma;

        cout << "Qual a quantidade de linhas da matriz? ";
        cin >> m;
        cout << "Qual a quantidade de colunas da matriz? ";
        cin >> n;

        double vet[m];
        double mat[m][n];

        for (int i=0;i<m;i++){

            cout << "Digite os elementos da "
             << i+1 << "a linha:" << endl;

            for ( int j=0;j<n;j++){

                cin >> mat[i][j];
            }
        }

        for (int i=0;i<m;i++){

            soma = 0;

            for ( int j=0;j<n;j++){
               soma = soma + mat[i][j];
            }
            vet[i] = soma;
        }

        cout << "VETOR GERADO: " << endl;
        for (int i=0;i<m;i++){

            cout << vet[i] << endl;
        }

        return 0;
    }
