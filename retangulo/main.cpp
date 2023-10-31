#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double base, altura, area, diagonal, perimetro;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "altura do retangulo: ";
    cin >> altura;

    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    cout << fixed << setprecision (4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}
