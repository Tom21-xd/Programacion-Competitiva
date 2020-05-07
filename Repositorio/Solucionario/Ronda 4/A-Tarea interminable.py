#Solución 1 - SneiderQuintero - time: 0.028s
def main(): #Definir clase main
    from sys import stdin, stdout #importar entradas rápidas 
    n = int(stdin.readline())
    while n:
    	n-=1
    	op = stdin.readline()
    	a = int(stdin.readline())
    	b = int(stdin.readline())
    	if op=="SUMA\n":
    		stdout.write(str(a+b))
    	elif op=='RESTA\n':
    		stdout.write(str(a-b))
    	else:
    		stdout.write(str(a*b))
    	stdout.write('\n')
if __name__ == "__main__":
    main()

#Solución 2 - Johan y Sierra - time: 
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
