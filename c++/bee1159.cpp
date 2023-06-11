#include <iostream>

using namespace std;

int main() {
    int X;

    while (true) {
        cin >> X;

        if (X == 0) {
            break;
        }

        int soma = 0;
        int contador = 0;

        while (contador < 5) {
            if (X % 2 == 0) {
                soma += X;
                contador++;
            }
            X++;
        }

        cout << soma << endl;
    }

    return 0;
}
