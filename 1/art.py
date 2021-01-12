  1 def repetir(cadena,n):
  2   return cadena*n
  3 
  4 def encontrarMayor1(L):
  5     cadena = "1" + "0"*(L-2)
  6     return cadena
  7 
  8 def encontrarMayor2(L):
  9   cadena = "1" + "0"*(L-1)
 10   return cadena
 11 
 12 def all9(A): 
 13     for x in A:
 14         if x!='9': 
 15             return False
 16     return True
 17 
 18 L = int(input())
 19 A = input()
 20 
 21 izq = A[:L]
 22 der = A[L:]
 23 
 24 veces = len(A)//L
 25 
 26 if all9(A):
 27     if len(A)%L != 0:
 28         print(repetir(encontrarMayor1(L),veces+2))
 29     else:
 30         print(repetir(encontrarMayor2(L),veces+1))
 31 else:
 32     if len(A)%L != 0:
 33         print(repetir(encontrarMayor2(L),veces+1))
 34     else: 
 35         i = int(izq[-1])
 36         j = int(der[0])
 37         
 38         if j < i:
 39             print(repetir(izq, veces) )
 40         
 41         else:
 42             dizq = int(izq)
 43             print(repetir(str(dizq+1),veces))
