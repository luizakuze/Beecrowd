#include <stdio.h>

int main()
{
    int N, A = -3, B = -2, C = -1;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        A = A + 4 ;
        B = B + 4;
        C = C + 4;
        printf("%d %d %d PUM\n", A, B, C);
    }
    
    return 0;
}
