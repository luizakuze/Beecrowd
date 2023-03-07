#include <iostream>

using namespace std;

int main()
{
    int valor;
    cin >> valor;


    for (int i = 0; i < 10; i ++) {

        cout << "N[" << i << "] = " << valor << endl;
        valor = valor * 2;
    }

    return 0;
}
