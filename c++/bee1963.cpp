#include <iostream>
#include <iomanip>

int main() {
    double valor1, valor2;
    std::cin >> valor1 >> valor2;

    double porcentagem = (valor2 - valor1) / valor1 * 100;

    std::cout << std::fixed << std::setprecision(2) << porcentagem << '%' << std::endl;

    return 0;
}
