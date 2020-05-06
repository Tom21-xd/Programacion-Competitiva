#Hora de  tu trabajo ;v
from sys import stdin, stdout
n=stdin.readline()
n=int(n)
while n:
  n-=1
  opc=stdin.readline()
  opc=str(opc)
  if opc =="SUMA\n":
      a =int(input())
      b =int(input())
      c=a+b
      print(c)
  elif opc=="RESTA\n":
      a =int(input())
      b =int(input())
      c=a-b
      print(c)
  else:
      a =int(input())
      b =int(input())
      c=a*b
      print(c)