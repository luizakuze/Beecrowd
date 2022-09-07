'''
Esse programa imprime a sequência de Fibonacci. 
SENDO QUE: N(0<N<46)
N = número de impressões númericas

Autor: Luiza
Data: 21/07/22
'''

N = int(input())
a = 0
b = 1

for i in range(N):
    if i == N-1:
        print(a)
    else:
        print(a, end=" ")
    c = a + b
    a = b
    b = c