#include <iostream>
#include <iomanip>

int main() {
    double v;

    std::cin >> v;
    for (int i = 0; i < 100; i++) {
        std::cout << "N[" << i << "] = " << std::fixed << std::setprecision(4) << v << std::endl;
        v /= 2;
    }

    return 0;
}
