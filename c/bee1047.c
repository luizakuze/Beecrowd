#include <stdio.h>


int main()
{
    int h_inicio, final, min_inicial, min_final, h_total, min_total;
    scanf("%d %d %d %d", &h_inicio, &min_inicial, &final, &min_final);

    h_total = final - h_inicio;

    if (h_total < 0)
        h_total = 24 + (final - h_inicio);
    
    min_total = min_final - min_inicial;
    
    if (min_total < 0)
    {
       min_total = 60 + (min_final - min_inicial);
       h_total--;
    }

    if (h_inicio == final && min_inicial == min_final)
       printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_total, min_total);
    
    return 0;
}
