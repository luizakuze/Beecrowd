#include <stdio.h>

int main()
{
    int X, Y, soma_ac = 0;

    scanf("%d\n%d", &X, &Y);

    // verificação
    if (X > Y) {
        int aux = X;
        X = Y;
        Y = aux;
    }

    for (int i = X; i <= Y; i++) {
        if (i % 13 != 0)
            soma_ac = soma_ac + i;
    }

    printf("%d\n", soma_ac);

    return 0;
}
