#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double F1, F2;

    // Entrada dos valores das flutuações do PIB nos dois anos
    cin >> F1 >> F2;

    // Calculando a flutuação total do PIB
    double flutuacao_total = F1 + F2 + (F1 * F2 / 100);

    // Imprimindo o resultado com seis casas decimais
    cout << fixed << setprecision(6) << flutuacao_total << endl;

    return 0;
}
