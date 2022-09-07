#bee1759
#string 

N = int(input())

string = ""
for i in range(N):
    string += 'Ho'
    if i == (N-1):
        string += '!'
    else:
        string +=' '
print(string)