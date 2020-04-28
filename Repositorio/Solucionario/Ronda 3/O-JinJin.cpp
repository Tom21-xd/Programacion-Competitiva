#include <bits/stdc++.h>
using namespace std;

int main()
{
	list<string> f1, f2;
	string str;
	int n, nP, it, jin;
	cin>>n;
	while(n--){
		f1.clear();	f2.clear();
		cin>>nP>>it;
		while(nP--){ //Fila inicial
			cin>>str;
			f1.push_back(str);
		}
		while(it--){
			cin>>jin; //Accion
			if(jin==1 && !f1.empty()){ //Accion JIN
				f2.push_back(f1.front());
				f1.pop_front();
			}
			if(jin==2 && !f2.empty()){ //Accion JINJIN
				f1.push_back(f2.front());
				f2.pop_front();
			}
		}
		//Muestro fila 1
		if(f1.empty()) cout<<"-"; //Si esta vacia '-' 
		else{
			it=0; //Para evitar mostrar un espacio al final
			for(auto i : f1){
				if(it++) cout<<" ";
				cout<<i;
			}
		}
		cout<<"\n";
		//Muestro fila 2
		if(f2.empty()) cout<<"-"; //Si esta vacía '-' 
		else{
			it=0; //Para evitar mostrar un espacio al final
			for(auto i : f2){
				if(it++) cout<<" ";
				cout<<i;
			}
		}
		cout<<"\n";
	}
	

	return 0;
}
