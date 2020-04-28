#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, user, t;
	map<string, int> note;
	string str;
	cin>>t;
	while(t--){
		note.clear();
		cin>>n;
		while(n--){
			cin>>str>>user;
			note[str]=user;
		}
		map<string,int>::iterator outI=note.begin(); //Se crea iterador de map
							     //Se puede reemplazar por auto
		cout<<outI->first<<" = "<<outI->second<<"\n"; //Como map, funciona con pair, toca mostrar dato->first, dato->second. 
		auto outF=note.rbegin(); //Aqui use el auto 
					 //map<string,int>::reverse_iterator outF;
		cout<<outF->first<<" = "<<outF->second<<"\n";
	}
	return 0;
}
