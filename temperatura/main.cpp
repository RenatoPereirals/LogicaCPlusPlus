#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    char escala;
    double temp, celsius, Fahrenheit;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> temp;

    celsius = (double) 5/9 * (temp - 32);
    Fahrenheit = (double) 9 * temp / 5 + 32;

    cout << "Temperatura equivalente em Celsius: ";
    cout << fixed << setprecision(2);

    if ( escala == 'F'){

        cout << celsius;
    }
    else{

        cout << Fahrenheit;
    }

    return 0;
}
