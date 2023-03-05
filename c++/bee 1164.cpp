#include <iostream>

using namespace std;

int main()

{
    int num_teste;
    cin >> num_teste;

    while (num_teste != 0) {

        int valor, num_compara = 0;
        cin >> valor;

        for (int i = 1; i < valor; i ++) {
            num_compara += i;
            if (num_compara == valor) break;
        }

        if (num_compara == valor) {
            cout << valor << " eh perfeito" << endl;
        } else {
            cout << valor << " nao eh perfeito" << endl;
        }

        num_teste--;
    }

    return 0;
}
