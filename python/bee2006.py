#bee2006

T = int(input())

resposta = input(). split()

respostafinal = 0

for i in range (len(resposta)):
    resposta[i] = int(resposta[i])
    if resposta[i] == T:
        respostafinal += 1

print(respostafinal)
