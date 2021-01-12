Gx=int(input())
while Gx>0:
    Gx=3*(Gx**3) + 2*(Gx**2) + Gx + 1
    Gx=Gx%2020
    print(Gx)
    Gx=int(input())
