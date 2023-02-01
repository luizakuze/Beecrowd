#include <stdio.h>

int main()
{
    int i;
    float N;
    scanf("%f", &N);

    // Reais
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0;

    for (i = 0; N >= 2; i++) {
        if (N >= 100) {
            cem++;
            N -= 100;
        } else if (N >= 50) {
            cinquenta++;
            N -= 50;
        } else if (N >= 20) {
            vinte++;
            N -= 20;
        } else if (N >= 10) {
            dez++;
            N -= 10;
        } else if (N >= 5) {
            cinco++;
            N -= 5;
        } else if (N >= 2) {
            dois++;
            N -= 2;
        }
    }

    // Centavos
    int um = 0, cinquentac = 0, vintec = 0, dezc = 0, cincoc= 0, umc = 0;

    for (i = 0; N > 0.00; i++) {
        if (N >= 1) {
            um++;
            N -= 1;
        } else if (N >= 0.50) {
            cinquentac++;
            N -= 0.50;
        } else if (N >= 0.25) {
            vintec++;
            N -= 0.25;
        } else if (N >= 0.10) {
            dezc++;
            N -= 0.10;
        } else if (N >= 0.05) {
            cincoc++;
            N -= 0.05;
        } else if (N > 0.00) {
            umc++;
            N -= 0.01;
        }
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinquentac);
    printf("%d moeda(s) de R$ 0.25\n", vintec);
    printf("%d moeda(s) de R$ 0.10\n", dezc);
    printf("%d moeda(s) de R$ 0.05\n", cincoc);
    printf("%d moeda(s) de R$ 0.01\n", umc);

    return 0;
}
