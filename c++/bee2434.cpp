#include <iostream>

using namespace std;

int main() {
    int num, saldo_inicial;
    cin >> num >> saldo_inicial;

    int menor_saldo = saldo_inicial;
    int saldo_atual = saldo_inicial;

    for (int i = 0; i < num; i++) {
        int movimentacao;
        cin >> movimentacao;

        saldo_atual += movimentacao;

        if (saldo_atual < menor_saldo) {
            menor_saldo = saldo_atual;
        }
    }

    cout << menor_saldo << endl;
    return 0;
}
