#include <stdio.h>

int main()
{
    int idade, ano, mes, dia;
    scanf("%d", &idade);

    ano = idade / 360;
    mes = (idade - 365 * ano)/30;
	  dia = (idade - 365 * ano - 30 * mes);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;
}
