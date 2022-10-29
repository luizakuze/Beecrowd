#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);

    for (int i = 0; i < 6 ; X++) {
        if (X % 2 != 0) {
            printf("%d\n", X);
            i++; }
    }
    return 0;
}
