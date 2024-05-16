#include <iostream> 
int main() {
    int n;
    while (std::cin >> n) {
        std::cout << (int)(n+99)/100 << std::endl;
    }
    return 0;
}
