#include<stdio.h>

int main()
{
    int num;
    float nt1, nt2, nt3, total, media;

    scanf("%d", &num);

    for( int i = 1; i <= num; i++){

        scanf("%f%f%f",&nt1,&nt2,&nt3);

        total = nt1*2.0 + nt2*3.0 + nt3*5.0;
        media = total / 10.0;

        printf("%.1f\n", media);
    }
    
    return 0;
}
