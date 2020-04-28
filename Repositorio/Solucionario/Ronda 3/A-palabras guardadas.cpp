#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<string> guardar;
	string str;
	int n, nP;
	cin>>n;
	while(n--){
		guardar.clear(); //Se vacia
		cin>>nP;
		while(nP--){
			cin>>str;
			//Pasa la cadena a mayúsculas
			transform(str.begin(),str.end(),str.begin(),::toupper);
			guardar.insert(str);
		}
		//Se muestra en orden inverso
		for(auto i=guardar.rbegin(); i!=guardar.rend(); i++)
			cout<<*i<<"\n";
	}
	return 0;
}
