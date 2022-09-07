#bee1010


entrada1 = input().split()
A1 = int(entrada1[0])
B1 = int(entrada1[1])
C1 = float(entrada1[2])

entrada2 = input().split()
A2 = int(entrada2[0])
B2 = int(entrada2[1])
C2 = float(entrada2[2])

valor1 = B1*C1
valor2 = B2*C2

valor3 = valor1+valor2

print("VALOR A PAGAR: R$ {:.2f}" .format(valor3))