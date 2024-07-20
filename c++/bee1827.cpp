### Versão com time limit error
#include <iostream>

int main() {
    int tam, centro;

    while (true) {
        // Lendo o tamanho da matriz
        std::cin >> tam;

        // Definindo o centro do quadrado de '1'
        centro = tam / 3;
        int centro_inicio = centro;
        int centro_fim = tam - centro;

        // Percorrendo as linhas
        for (int j = 0; j < tam; j++) {
            // Percorrendo as colunas
            for (int i = 0; i < tam; i++) {
                if (i == tam / 2 && j == tam / 2) {
                    // Único '4' no centro do bloco
                    std::cout << '4';
                } else if (i >= centro_inicio && i < centro_fim && j >= centro_inicio && j < centro_fim) {
                    // Quadrado de '1' no centro do bloco
                    std::cout << '1';
                } else if (i == j) {
                    // Diagonal principal '2'
                    std::cout << '2';
                } else if (i == (tam - j - 1)) {
                    // Diagonal secundária '3'
                    std::cout << '3';
                } else {
                    // Zeros
                    std::cout << '0';
                }
            }
                std::cout << std::endl;
        }
    }

    return 0;
}

### Versão aceita
#include <iostream>
#include <vector>

int main() {
    int tam, centro;

    while (std::cin >> tam) {
        // Matriz auxiliar para armazenar os valores
        std::vector<std::vector<char>> matriz(tam, std::vector<char>(tam, '0'));

        // Definindo o centro do quadrado de '1'
        centro = tam / 3;
        int centro_inicio = centro;
        int centro_fim = tam - centro;
        int meio = tam / 2;

        // Preenchendo a diagonal principal com '2'
        for (int i = 0; i < tam; ++i) {
            matriz[i][i] = '2';
        }

        // Preenchendo a diagonal secundária com '3'
        for (int i = 0; i < tam; ++i) {
            matriz[i][tam - i - 1] = '3';
        }

        // Preenchendo o quadrado central com '1'
        for (int i = centro_inicio; i < centro_fim; ++i) {
            for (int j = centro_inicio; j < centro_fim; ++j) {
                matriz[i][j] = '1';
            }
        }

        // Definindo o centro do quadrado com '4'
        matriz[meio][meio] = '4';

        // Imprimindo a matriz
        for (int i = 0; i < tam; ++i) {
            for (int j = 0; j < tam; ++j) {
                std::cout << matriz[i][j];
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;  // Linha extra entre os blocos de matrizes
    }

    return 0;
}
