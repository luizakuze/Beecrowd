#bee1589
'''
#1 FORMA DE RESOLUÇÃO:
T = int(input())

while T>0:
    A,B = map(int,input(). split())

    print(A+B)

    T-=1
'''
#2 FORMA DE RESOLUÇÃO
T = int(input())

for i in range(T):
    A,B=list(map(int,input().split()))
    print(A+B)