#include <iostream>

using namespace std;

int main() {
    // vetor de numeros
    int numeros[10];

    // lê dados pra dentro do vetor
    for (int i = 0; i < 10; i++) {
        int valor;
        cin >> valor;

        // valor negativo ou igual a zero
        if (valor <= 0)
            numeros[i] = 1;
        else
            numeros[i] = valor;
    }

    // saída de dados
    for (int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << numeros[i] << endl;
    }

    return 0;
}
