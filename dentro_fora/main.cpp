#include <iostream>

using namespace std;

int main()
{
    int n, dentro, fora, x;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    dentro = 0;
    fora = 0;

    for (int i=0;i<n;i++){

        cout << "Digite um numero: ";
        cin >> x;

        if (x < 10 || x > 20){
            fora = fora + 1;
        }
        else{
            dentro = dentro + 1;
        }
    }

    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;


    return 0;
}
