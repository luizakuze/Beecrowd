#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y) {
        int aux = X;
        X = Y;
        Y = aux;
    }

    int i = 0, impar = 0;
    for (i = X + 1; i < Y; i++)
        if (i % 2 != 0)
            impar = impar + i;

    printf("%d\n", impar);

    return 0;
}
