#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Quantos valores vai ter cada vetor: ";
    cin >> n;

    int A[n], B[n], C[n];

    cout << "Digite os valores do vetor A" << endl;
    for (int i=0;i<n;i++){

        cin >> A[i];
    }

    cout << "Digite os valores do vetor B" << endl;
    for (int i=0;i<n;i++){

        cin >> B[i];
    }

    for (int i=0;i<n;i++){
        C[i] = A[i] + B[i];
    }

    cout << "VETOR RESULTANTE: " << endl;
    for (int i=0;i<n;i++){

        cout << C[i] << endl;
    }

    return 0;
}
