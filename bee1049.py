#bee1049

A=input()
B=input()
C=input()

if A=="vertebrado":
    if B=="ave":
        if C=="carnivoro":
            print("aguia")
        if C=="onivoro":
            print("pomba")
    if B=="mamifero":
        if C=="onivoro":
            print("homem")
        if C=="herbivoro":
            print("vaca")

if A=="invertebrado":
    if B=="inseto":
        if C=="hematofago":
            print("pulga")
        if C=="herbivoro":
            print("lagarta")
    if B=="anelideo":
        if C=="hematofago":
            print("sanguessuga")
        if C=="onivoro":
            print("minhoca")