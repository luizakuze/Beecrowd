#bee1038

entrada = input(). split()
codigo = int(entrada[0])
qtd = int(entrada[1])

total = 0.0

if codigo == 1:
    total = 4.0 * qtd
elif codigo == 2:
    total = 4.5 * qtd
elif codigo == 3:
    total = 5.0 * qtd
elif codigo == 4:
    total = 2.0 * qtd
elif codigo == 5:
    total = 1.5 * qtd

print("Total: R$ {:.2f}" .format(total))
