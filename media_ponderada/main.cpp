#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double a, b, c, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    cout << "Digite tres numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << fixed << setprecision(1);

    for (int i=0;i<n;i++){

        media = (double) (a * 2 + b * 3 + c * 5) / 10;
        cout << "MEDIA = " << media << endl;

        cout << "Digite tres numeros: " << endl;
        cin >> a;
        cin >> b;
        cin >> c;

    }

    return 0;
}
