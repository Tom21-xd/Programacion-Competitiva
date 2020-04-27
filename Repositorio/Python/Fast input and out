#Crea una clase main, donde pondras tu código
#Hace mucho más rápido la compilación

def main():
	#Tu código
if __name__ == "__main__":
	main()

#Usa entradas y salidas stdin, stdout

# importar: from sys import stdin, stdout
#Entonces, input() -> stdin.readline()
# print() -> stdout.write(str(data))

#Carga todo el buffer de entrada
buff = stdin.readlines()

#Solución SPOJ Enormous Input Test
#Time: 1080 ms Python 3.x

def main():
    from sys import stdin, stdout
    n, k = stdin.readline().split()
    n = int(n)
    k = int(k)
     
    cnt = 0
    lines = stdin.readlines()
    for line in lines:
        if int(line) % k == 0:
            cnt += 1
 
    stdout.write(str(cnt))
 
if __name__ == "__main__":
    main()
