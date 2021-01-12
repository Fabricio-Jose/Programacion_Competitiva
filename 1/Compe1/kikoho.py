n=int(input())
o=[0 for j in range(n)]
try:
    while True:
        if n>=1 and n<=20:
            for i in range(n):
                xa=input()
                ya=input()
                xb=input()
                yb=input()
                xc=input()
                yc=input()
                if xa>=-700 and xb>=-700 and xc>=-700 and ya>=-700 and yb>=-700 and yc>=-700 and xa<=1000 and xb<=1000 and xc<=1000 and ya<=1000 and yb<=1000 and yc<=1000:            
                    za=(xa*yb)+(xb*yc)+(xc*ya)
                    zb=(xa*yc)+(xc*yb)+(xb*ya)
                    total=(za-zb)/2
                    o[i]=total
            for j in range(n):
                print(o[j])
except EOFError:
    n=0
