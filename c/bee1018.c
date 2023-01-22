#include <stdio.h>

int main()
{
    int N, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    scanf("%d", &N);

    printf("%d\n", N);

    for (int i = 0; N != 0; i++) {
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
        } else if (N >= 1) {
            um++;
            N -= 1;
        }
    }

     printf("%d nota(s) de R$ 100,00\n", cem);
     printf("%d nota(s) de R$ 50,00\n", cinquenta);
     printf("%d nota(s) de R$ 20,00\n", vinte);
     printf("%d nota(s) de R$ 10,00\n", dez);
     printf("%d nota(s) de R$ 5,00\n", cinco);
     printf("%d nota(s) de R$ 2,00\n", dois);
     printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}
