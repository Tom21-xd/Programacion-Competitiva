#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string str;
	cin>>n;
	while(n--){
		stack<char> inp; //Se crea aqui, para que aparezca vacia en cada caso
		cin>>str;
		for(char c : str) 
		{
			if(c=='(') //Se agrega
				inp.push(c);
			else if(!inp.empty() && c!=inp.top()) //Si es ')', se verifica si no esta vacío o si el dato top es diferente a ')' 
				inp.pop();
			else inp.push(')'); //Se agrega el ')' 
		} 
		if(inp.empty()) //Si la pila esta vacia es correcto
			cout<<"CORRECTO\n";
		else cout<<"INCORRECTO\n";
	}
	return 0;
}
