#Hora de  tu trabajo ;v
from sys import stdin, stdout
n=stdin.readline()
n=int(n)
while n:
  n-=1
  c=0  
  con=1
  l,opc=stdin.readline().split()
  l=int(l)
  if opc =="SUMA":
      for i in range(l):
        aux=int(input())
        c+=aux
      for i2 in range(con):
        c=c%1007
      con+=1  
      print(c)
  elif opc=="RESTA":
      for i in range (l):
        aux=int(input())
        if i==0:
          c=aux
        else:
          c-=aux
      for i2 in range (con):
        c=c%1007
      con+=1 
      print(c)
  else:
      for i in range (l):
        aux=int(input())
        if i==0:
          c=aux
        else:
          c*=aux
      for i2 in range (con):
        c=c%1007
      con+=1 
      print(c)
      