#include <stdio.h>
#define pi 3.14159

int main()
{
    double raio, volume;

    scanf("%lf", &raio);
    volume = (4.0/3) * pi * raio * raio * raio;

    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
