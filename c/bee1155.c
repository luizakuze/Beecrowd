#include <stdio.h>

int main()
{
    float S = 1.0;

    for (int i = 2; i < 101; i++) {
        S = S + 1.0 / i;
    }

    printf("%.2f\n", S);

    return 0;
}
