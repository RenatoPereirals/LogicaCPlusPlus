#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double r, pi, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> r;

    pi = 3.14159;
    area = pi * pow(r,2);

    cout << fixed << setprecision (3);
    cout << "AREA = " << area;

    return 0;
}
