#bee1043
entrada = map(float,input().split())
A, B, C= entrada

perimetro = (A+B+C)
area = (A+B)*C/2


if (A+B)>C and (A+C)>B and (B+C)>A: #condição de existência do triângulo
    print("Perimetro = {:.1f}" .format(perimetro))
else:
    print("Area = {:.1f}" .format(area))
