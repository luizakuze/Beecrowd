#include <stdio.h>

int main()
{
    int funcionario, horas;
    float valor_hora, salario;

    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%f", &valor_hora);

    salario = valor_hora * horas;

    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}
