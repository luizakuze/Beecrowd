#include <stdio.h>

int main()
{
    int a, b, c, d, e, par = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if (a % 2 == 0)
        par++;
    if (b % 2 == 0)
        par++;
    if (c % 2 == 0)
        par++;
    if (d % 2 == 0)
        par++;
    if (e % 2 == 0)
        par++;

    printf("%d valores pares\n", par);

    return 0;
}
