#include <iostream>

using namespace std;

int main()
{
    int x, produto;

    cout << "Deseja a tabuada para qual numero? ";
    cin >> x;

    for (int i = 1; i <= 10; i++){
        produto = x * i;
        cout << x << " x " << i << " = " << produto << endl;
    }

    return 0;
}
