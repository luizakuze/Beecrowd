#include <stdio.h>

int main()
{
    int A, B, C;

    while (scanf("%d %d %d", &A, &B, &C)!=EOF) // "End of File"
    {
    if (A == B && B == C)
        printf("*\n");
    else if (B == C && A != B)
        printf("A\n");
    else if (A == C && B != A)
        printf("B\n");
    else
        printf("C\n");
    }
    return 0;
}
