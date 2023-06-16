#include <iostream>

int main(){
    int B, G;

    std::cin >> B;
    std::cin >> G;

    if (G/2 <= B) std::cout << "Amelia tem todas bolinhas!" << std::endl;
    else std::cout << "Faltam " << G/2-B << " bolinha(s)" << std::endl;

    return 0;
}
