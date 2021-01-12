import math
while True:
    try:
        n =int(input())
        fact=0;
        for i in range(1,n+1): 
            fact=fact+math.log10(i)
        fact=fact+1
        parte_entera=int (fact) 
        print(parte_entera)
    except EOFError:
        break
