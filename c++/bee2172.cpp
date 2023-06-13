#include <iostream>

int main() {
    int X, M;
    
    while (true) {
        std::cin >> X >> M;
        
        if (X == 0) break;
        
        std::cout << X * M << std::endl;
    }

    return 0;
}
