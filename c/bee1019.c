#include <stdio.h>

int main()
{
    int tempo, h, min, sec;
    scanf("%d", &tempo);

    h = tempo / 3600;
    min = (tempo - h * 3600) / 60;
    sec = (tempo - h * 3600 - 60 * min);

    printf("%d:%d:%d\n", h, min, sec);

    return 0;
}
