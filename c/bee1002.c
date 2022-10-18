#include <stdio.h>
#define n 3.14159

int main()
{
    double area, raio;

    scanf("%lf", &raio);
    area = n * raio * raio;
    printf("A=%.4lf\n", area);

    return 0;
}
