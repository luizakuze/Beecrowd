#include <stdio.h>

int main()
{
    int N, teste, in = 0, out = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &teste);
        if (teste >= 10 && teste <= 20)
            in++;
        else
            out++;
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}
