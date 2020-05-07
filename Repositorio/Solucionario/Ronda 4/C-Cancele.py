#Johan y Sierra - time: 0.025s
from sys import stdin, stdout
n= int(input())
while n:
  n-=1
  a, b = stdin.readline().split()
  a, b =int(a), int(b)
  c=a+b
  print(c)
