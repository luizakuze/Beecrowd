#include <stdio.h>

int main()
{
    int vet[5];
    int i, par = 0, imp = 0, pos = 0, neg = 0;

    for (i = 0; i < 5; i++){

		scanf("%d", &vet[i]);

        if (vet[i] % 2 == 0) 
            par++;
        else if (vet[i] % 2 != 0)
            imp++;
        if (vet[i] > 0)
            pos++;
        else if (vet[i] < 0)
            neg++;
    }

	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",par,imp,pos,neg);	

    return 0;
}
