#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int menor, posicao; // Variáveis para armazenar o menor valor e sua posição
    std::cin >> menor;
    posicao = 0;

    // Leitura dos elementos e busca do menor valor
    for (int i = 1; i < N; ++i) {
        int num;
        std::cin >> num;
        
        if (num < menor) {
            menor = num;
            posicao = i;
        }
    }

    // Saída
    std::cout << "Menor valor: " << menor << std::endl;
    std::cout << "Posicao: " << posicao << std::endl;

    return 0;
}
