#include<stdio.h>

int main()
{
    int positivo = 0;
    float num, media, soma_ac = 0;

    for ( int i = 0; i < 6; i++) {

        scanf("%f", &num);

        if (num > 0) {
            soma_ac = soma_ac + num;
            positivo++;
        }
    }

    media = (float) soma_ac / positivo;

    printf("%d valores positivos\n%.1f\n", positivo, media);

    return 0;
}
