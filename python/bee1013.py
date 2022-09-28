#bee1013
entrada = input().split()
a = int(entrada[0])
b = int(entrada[1])
c = int(entrada[2])

d = (a+b+abs(a-b))/2 #abs é a distância entre um número e o 0 na reta numérica.
e = (d+c+abs(d-c))/2

print("{:.0f} eh o maior" .format(e))
