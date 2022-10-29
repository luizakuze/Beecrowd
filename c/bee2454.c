#include <stdio.h>

int main()
{
	int P, R;

	scanf("%d %d", &P, &R);

	if (P == 0)
		printf("C\n");
	else if ( P != 0) {
		if (R == 0)
		printf("B\n");
		else
		printf("A\n");
	}
    return 0;
}
