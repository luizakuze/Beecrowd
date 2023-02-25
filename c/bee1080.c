#include <stdio.h>

int main()
{

    int valor[100], maior = 0, posicao;

    for (int i = 0; i < 100; i++){

        scanf("%d", &valor[i]);

        if (valor[i] > maior) {
            maior = valor[i];
            posicao = i + 1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);


    return 0;
}
