// VERSÃO SEM VETOR
#include <iostream>
#include <iomanip>

int main() {
    double entrada;

    for (int i = 0; i < 100; i++) {
        std::cin >> entrada;
        if (entrada <= 10) {
            std::cout << "A[" << i << "] = " << std::fixed << std::setprecision(1) << entrada << std::endl;
        }
    }

    return 0;
}

// VERSÃO COM VETOR
#include <iostream>
#include <iomanip>

int main() {
    double A[100];

    for (int i = 0; i < 100; i++) {
        std::cin >> A[i];
    }

    for (int i = 0; i < 100; i++) {
        if (A[i] <= 10) {
            std::cout << "A[" << i << "] = " << std::fixed << std::setprecision(1) << A[i] << std::endl;
        }
    }

    return 0;
}
