#include <stdio.h>

int main()
{
    int cod_p1, num_p1, cod_p2, num_p2;
    float preco1, preco2, total;

    scanf("%d %d %f", &cod_p1, &num_p1, &preco1);
    scanf("%d %d %f", &cod_p2, &num_p2, &preco2);

    total = num_p1 * preco1 + num_p2 * preco2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
