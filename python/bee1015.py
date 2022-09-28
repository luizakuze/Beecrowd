#bee1065

P1 = map(float,input().split())
x1, y1 = P1

P2 = map(float,input().split())
x2, y2 = P2

d = (((x1 - x2))**2 +((y1 - y2))**2)**(0.5)

print("{:.4f}".format(d))
