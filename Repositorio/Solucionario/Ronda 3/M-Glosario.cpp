#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<string> f1;
	int n, nP;
	string str;
	cin>>n;
	while(n--){
		f1.clear();
		cin>>nP;
		for(int i=0; i<nP; i++){
			cin>>str;
			int pos=str.size()-1;
			//Elimino el último simbolo, si es que lo hay
			if(str[pos]==',' || str[pos]=='.' || str[pos]=='?' || str[pos]=='!')
				str.erase(str.begin()+pos); //Aqui se elimina
			f1.insert(str);
		}
		cin>>fin;
		//Muestro datos
		for(string out : f1)
			cout<<out<<"\n";
		cout<<"-\n";
	}
	return 0;
}
