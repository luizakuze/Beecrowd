#include <stdio.h>

int main()
{
    int teste, num;

    scanf("%d", &teste);

    for (int i = 0; i < teste; i++) {
        scanf("%d", &num);
        if (num % 2 != 0)
            printf("1\n");
        else if (num % 2 == 0)
            printf("0\n");
    }

    return 0;
}
