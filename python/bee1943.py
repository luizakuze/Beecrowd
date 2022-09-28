#bee19431933
'''
K = int(input())
N = 0

if K<=1:
    N =+1
elif 2>=K:
    N =+3
elif 5>=K:
    N =+5
elif 10>=K:
    N =+10
elif 25>=K:
    N =+25
elif 50>=K:
    N =+50
elif 100>=K:
    N =+100

print("Top",N)
'''
K = int(input())
print('Top ', end = '')
if K <= 1:
    print('1')
elif K <= 3:
    print('3')
elif K <= 5:
    print('5')
elif K <= 10:
    print('10')
elif K <= 25:
    print('25')
elif K <= 50:
    print('50')
elif K <= 100:
    print('100')
