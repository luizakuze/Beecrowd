#bee1048
#TABELA:
#0 - 400.00..... 15%
#400.01 - 800.00..... 12%
#800.01 - 1200.00..... 10%
#1200.01 - 2000.00..... 7%
#Acima de 2000.00..... 4%

salario = float(input())
if 0<=salario<=400.00:
    reajuste = salario*0.15
    novoSalario = reajuste+salario
    percentual = 15
elif 400.01<=salario<=800.00:
    reajuste = salario*0.12
    novoSalario = reajuste+salario
    percentual = 12
elif 800.01<=salario<=1200.00:
    reajuste = salario*0.1
    novoSalario = reajuste+salario
    percentual = 10
elif 1200.01<=salario<=2000.00:
    reajuste = salario*0.07
    novoSalario = reajuste+salario
    percentual = 7
else:
    reajuste = salario*0.04
    novoSalario = reajuste+salario
    percentual = 4
print("Novo salario: {:.2f}".format(novoSalario))
print("Reajuste ganho: {:.2f}".format(reajuste))
print("Em percentual:",percentual,"%")