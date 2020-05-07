#Solución 1 - SneiderQuintero - time: 0.048s
from sys import stdin, stdout
while True:
	#Dentro del try van los datos que indican EOF
	try:
		k, s = stdin.readline().split()
	except:
		break
	k = int(k)
	c = c2 = 0
	c3 = 1
	for it in s:
		c2+=int(it)
		c3*=int(it)
	s = int(s) 
	if s%k==0:
		c+=1
		stdout.write('SI ')
	else:
		stdout.write('NO ')
	if c2%k==0:
		c+=1
		stdout.write('SI ')
	else:
		stdout.write('NO ')
	if c3%k==0:
		c+=1
		stdout.write('SI')
	else:
		stdout.write('NO')
	if c==0:
		stdout.write(' ABURRIDO\n')
	elif c==3:
		stdout.write(' PERFECTO\n')
	else:
		stdout.write('\n')


#Solución 2 - JuanJr - C++ - time: 0.007s
#Juan aplicó las propiedades de la aritmética modular a cada dígito de la cadena
#De esta manera, trabaja con números grandes
#include <bits/stdc++.h>
using namespace std;
#define SZ(x) ((int) x.size())
#define form(i, a, b, c) for(int i = a; i < b; i += c)
#define fore(i, a, b) for(int i = a; i < b; ++i)
#define forn(i, n) for(int i = 0; i < n; ++i)
#define rforn(i, n) for(int i = n - 1; i >= 0; --i)
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int k, l, pot, acum, sum, mul, digit;
    bool a, b, c;
    while(cin >> k >> s){
        l = SZ(s);
        acum = sum = 0;;
        a = b = c = pot = mul = 1;
        rforn(i, l){
            digit = (s[i] - '0') % k;
            acum = (acum + (digit * pot) % k) % k;
            pot = (pot * 10 % k) % k;
            sum = (sum + digit) % k;
            mul = (mul * digit) % k;
        }
        a = acum == 0;
        b = sum == 0;
        c = mul == 0;
        cout << (a ? "SI ": "NO ") << (b ? "SI ": "NO ") << (c ? "SI": "NO");
        if(a && b && c) cout << " PERFECTO";
        else if(!a && !b && !c) cout << " ABURRIDO";
        cout << "\n";
    }
    return 0;
}
