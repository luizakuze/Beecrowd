#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // entrada
    int qt_notas, qt_maiores;

    while (cin >> qt_notas >> qt_maiores) {
        vector<int> notas(qt_notas);

        // lê as notas diretamente no vetor
        for (int i = 0; i < qt_notas; i++) {
            cin >> notas[i];
        }

        // ordena em ordem decrescente usando um comparador personalizado
        // greater<int>() é um comparador personalizado que especifica a ordenação decrescente para a função sort em C++
        sort(notas.begin(), notas.end(), greater<int>());

        // soma as K-ésima maiores notas
        int soma_ac = 0; // soma acumulada
        for (int i = 0; i < qt_maiores; i++) {
            soma_ac += notas[i];
        }

        // imprime o resultado como módulo de 10^9 + 7
        cout << soma_ac % 1000000007 << endl;
    }

    return 0;
}
