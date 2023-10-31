#include <iostream>

using namespace std;

int main()
{
    double glicose;

    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    if (glicose < 100){
        cout << "Classificacao: normal";
    }
    else if(glicose <= 140){
        cout << "Classificacao: elevado";
    }
    else{
        cout << "Classificacao: diabete";
    }
    return 0;
}
