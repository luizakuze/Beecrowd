#bee1012

#entrada
entrada = input().split() #.split() = separa os valores do input para mexer separadamente
A = float(entrada[0]) #[0] = 1posição entrada
B = float(entrada[1]) #[1] = 2posição entrada
C = float(entrada[2]) #[2] = 3posição entrada

#a)
triangulo = (A * C)/2
#b)
pi = 3.14159
circulo = pi * (C*C)
#c)
trapezio = ((A + B)* C)/2
#d)
quadrado = B*B
#e)
retangulo = A*B

#saída
print('TRIANGULO: {:.3f}' .format(triangulo))
print('CIRCULO: {:.3f}' .format(circulo))
print('TRAPEZIO: {:.3f}' .format(trapezio))
print('QUADRADO: {:.3f}' .format(quadrado))
print('RETANGULO: {:.3f}' .format(retangulo))