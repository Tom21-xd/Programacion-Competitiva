#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
	int t,b,input;
	cin>>t;
	while(t--){
		stack<int>pila;
		cin>>b;
		while(b--){
			cin>>input;
			if(input>0)
				pila.push(input);
			else if(!pila.empty()){ //Si no esta vacia, mostramos y eliminamos.
				cout<<pila.top()<<"\n";
				pila.pop();
			}
		}
	}
	return 0;
}
