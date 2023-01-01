#include <stdio.h>

int main()
{
    long long int A, B, soma = 0;
    scanf("%lld %lld", &A, &B);

    soma = ((A + B) * (B - A + 1)) / 2;

    printf("%lld\n", soma);
    return 0;
}
