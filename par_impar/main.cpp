#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    cout << "Digite um numero: ";
    cin >> x;

    for (int i=0;i<n;i++){
        if (x == 0){
            cout << "NULO" << endl;
        }
        else{
            if(x % 2 == 0){
            cout << "PAR ";
            }

            else{
                cout << "IMPAR ";
            }
            if( x < 0){
                cout << "NEGATIVO " << endl;
            }
            else {
                cout << "POSITIVO " << endl;
            }
        }
        cout << "Digite um numero: ";
        cin >> x;
    }




    return 0;
}
