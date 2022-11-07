// Codificação: 1.Álcool 2.Gasolina 3.Diesel 4.Fim

#include <stdio.h>

int main()
{
    int opcao, alc = 0, gasol = 0,  diesel = 0;

    for (int i = 0; opcao != 4; i++) {

        scanf("%d", &opcao);

        if (opcao == 1)
            alc++;
        else if (opcao == 2)
            gasol++;
        else if (opcao == 3)
            diesel++;
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gasol, diesel);

    return 0;
}
