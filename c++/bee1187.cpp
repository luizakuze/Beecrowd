
#### Versão com erro de arredondamento
#include <iostream>
#include <iomanip>

int main() {
    float mat[12][12];
    float res = 0;
    char op;

    std::cin >> op;

    // Recebendo dados
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> mat[i][j];
        }
    }

    int count = 0;
    // Realizando operação 'S' ou 'M'
    for (int i = 0; i <= 4; i++) { // Somente até linha 4
        for (int j = i + 1; j < 11 - i; j++) { // Definindo os limites da área verde
            res += mat[i][j];
            count++;
        }
    }

    // Multiplicação = Soma / Número de termos
    if (op == 'M') {
        res /= count;
    }

    std::cout << std::fixed << std::setprecision(1) << res << std::endl;

    return 0;
}

#### Versão aceita
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double mat[12][12];
    char op;
    double res = 0.0;
    
    cin >> op;
    
    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   cin >> mat[i][j];
            if(j > i && (j+i) < 11){
                 res += mat[i][j];
            }
            }
   }
    
    if(op == 'S')
         printf("%.1f\n", res);
    else
         printf("%.1f\n", res/30.0);
    return 0;
}
