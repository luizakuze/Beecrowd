#bee1044

entrada = input(). split()
A = int(entrada[0])
B = int(entrada[1])


if (A%B==0) or (B%A==0):
    print("Sao Multiplos")
elif (A%B!=0) or (B%A!=0):
    print("Nao sao Multiplos")
