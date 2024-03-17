#include <iostream>

int main() {
    int N;

    std::cin >> N;

    while (N--) {
        int X, Y;

        std::cin >> X >> Y;

        int RAFA = 9 * X * X + Y * Y;
        int BETO = 2 * X * X + 25 * Y * Y;
        int CARLOS = -100 * X + Y * Y * Y;

        if (RAFA > BETO && RAFA > CARLOS) {
            std::cout << "Rafael ganhou" << std::endl;
        } else if (BETO > RAFA && BETO > CARLOS) {
            std::cout << "Beto ganhou" << std::endl;
        } else {
            std::cout << "Carlos ganhou" << std::endl;
        }
    }

    return 0;
}
