#Solución 1 - SneiderQuintero - time: 0.029s
def main(): #Crear clase main
    from sys import stdin, stdout #importar fast i/o
    n = int(stdin.readline()) # N casos
    while n:
    	n-=1
    	n2,op= stdin.readline().split()
    	n2=int(n2) # N2 números a operar
    	if op=='SUMA':
    		ans=0
    		while n2:
    			n2-=1
    			a=int(stdin.readline())
    			ans+=a
    		stdout.write(str(ans%1007))
    	else: #MULTIPLICACION
    		ans=1
    		while n2:
    			n2-=1
    			a=int(stdin.readline())
    			ans*=a
    		stdout.write(str(ans%1007))
    	stdout.write('\n')
if __name__ == "__main__":
    main()

#Solución 2 - Johan y Sierra - time: 0.028s
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


#Solución 3 - JuanJr - C++ - time: 0.004s
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    ll acum, m;
    cin >> t;
    string s;
    while(t--){
        cin >> n >> s;
        if(s[0] == 'S'){
            acum = 0;
            while(n--){
                cin >> m;
		//Propiedad de la aritmética modular
                acum = (acum + m % 1007ll) % 1007ll;
            }
        }else{
            acum = 1;
            while(n--){
                cin >> m;
                acum = (acum * m % 1007ll) % 1007ll;
            }
        }
        cout << acum << "\n";
    }
    return 0;
}
