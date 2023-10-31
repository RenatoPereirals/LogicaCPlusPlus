#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double distancia, consumo, media;

    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustivel gasto: ";
    cin >> consumo;

    media = distancia / consumo;

    cout << fixed << setprecision (3);
    cout << "Consumo medio = " << media;

    return 0;
}
