#bee2339

entrada = input().split()
C = int(entrada[0])
P = int(entrada[1])
F = int(entrada[2])

R = P/C

if R>=F:
    print("S")
elif R<F:
    print("N")
