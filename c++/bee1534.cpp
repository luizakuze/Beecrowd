#include <iostream>
#include <iomanip>

int main() {
    int n;

    while (std::cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == (n - i - 1)) {
                    std::cout << '2';
                } else if (i == j) {
                    std:: cout << '1';
                } else {
                    std::cout << '3';
                }
            }
            std::cout << std::endl;
        }
    }




    return 0;
}
