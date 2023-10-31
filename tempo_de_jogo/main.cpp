#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int horaInicial, horaFinal;

    cout << "Hora inicial: ";
    cin >> horaInicial;

    cout << "Hora final: ";
    cin >> horaFinal;

    if (horaInicial >= horaFinal){
        cout << "O JOGO DUROU " << 24 + (horaFinal - horaInicial) <<" HORA(S)" << endl;
    }
    else{
        cout << "O JOGO DUROU " << horaFinal - horaInicial <<" HORA(S)" << endl;
    }

    return 0;
}
