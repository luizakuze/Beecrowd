#include <iostream>
#include <iomanip> // Para std::setprecision

int main() {
    int linha;
    char caractere;
    float soma_acumulada = 0;
    float mat[12][12];
    float num;
    std::cin >> linha >> caractere;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> num;
            mat[i][j] = num;
            if (i == linha) {
                soma_acumulada += num;
            }
        }
    }

    if (caractere == 'M') {
        soma_acumulada /= 12.0;
    }

    std::cout << std::fixed << std::setprecision(1) << soma_acumulada << std::endl;

    return 0;
}
