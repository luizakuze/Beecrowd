#bee1073

N =int(input())

for x in range (1,N+1):
    a = x*x
    if x%2==0:
        print("{}^2 = {}".format(x, a))
