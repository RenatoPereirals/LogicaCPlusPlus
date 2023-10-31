#include <iostream>

using namespace std;

int main()
{
    int x, somaPares;

    cout << "Digite um numero inteiro: ";
    cin >>x;

    somaPares == 0;

    while (x != 0){
        if(x % 2 == 0){

            somaPares = 5 * x + 20;

        }
        else{

            somaPares = 5 * x + 25;

        }

        cout << "SOMA = " << somaPares << endl;
        cout << "Digite um numero inteiro: ";
        cin >> x;

    }

    return 0;
}
