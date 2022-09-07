#bee1847

entrada = map(int,input().split())
A, B, C = entrada

if A>B:
    if B>C:
        if B-C<A-B:print(":)")
        else:print(":(")
    else:print(":)")
elif A<B:
    if B<C:
        if C-B<B-A: print(":(")
        else:print(":)")
    else:print(":(")
elif B<C:print(":)")
else:print(":(")