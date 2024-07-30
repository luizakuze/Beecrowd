#include <iostream>
int main() {
    int loop, n1, n2, sum;

    std::cin >> loop;

    while (loop--) {
        std::cin >> n1 >> n2;

        if (n1 > n2) {
            n1 = n1+n2;
            n2 = n1-n2;
            n1 = n1-n2;
        }
        sum = 0;
        for (int i = n1+1; i < n2; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        std::cout << sum << std::endl;

    }


    return 0;
}
