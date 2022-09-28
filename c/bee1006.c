#include <stdio.h>

int main()
{
	double A, B, C, MEDIA;

	scanf("%lg", &A);
	scanf("%lg", &B);
	scanf("%lg", &C);
	MEDIA = (A * 2 + B * 3 + C * 5) / 10;
	printf("MEDIA = %.1lf\n", MEDIA);
	return 0;
}
