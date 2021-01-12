A=int(input())
while A!=0:
    A=(3*((A+1)**3) - 7*((A+1)**2) + 6*(A+1) - 1)
    if A>2020:
        A=A%2020
    print(A)
    A=int(input())
