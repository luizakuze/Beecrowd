#include <iostream>

int main() {
    int N;
    std::cin >> N;

    while (N--) {
        int dias = 0;
        int C;
        std::cin >> C;

        while (C > 1) {
            C /= 2;
            dias++;
        }

        std::cout << dias << " dias" << std::endl;
    }

    return 0;
}
