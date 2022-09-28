entrada = (float, input().split())
X = (entrada[0])
Y = (entrada[1])

if X>0 and Y>0:
    print("Q1")
elif X>0 and Y<0:
    print("Q4")
elif X<0 and Y>0:
    print("Q2")
elif X<0 and Y<0:
    print("Q3")
