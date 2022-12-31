#include <stdio.h>

int main()
{
    int num_teste, num;

    scanf("%d\n", &num_teste);

    for (int i = 1; i <= num_teste; i++) {
        scanf("%d", &num);

        if (num == 0)
            printf("NULL\n");

        else if (num <= 0 && num % 2 == 0)
            printf("EVEN NEGATIVE\n");
        else if (num <= 0 && num % 2 == -1)
            printf("ODD NEGATIVE\n");
        else if (num >= 0 && num % 2 == 0)
            printf("EVEN POSITIVE\n");
        else if (num >= 0 && num % 2 == 1)
            printf("ODD POSITIVE\n");
    }

    return 0;
}
