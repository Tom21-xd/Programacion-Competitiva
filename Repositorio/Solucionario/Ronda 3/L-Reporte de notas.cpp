#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, f, id;
	double note;
	map<int,pair<string,double>> inp;
	string str;
	cin>>n;
	cout<<fixed<<setprecision(1); //Para aproximar a un decimal la nota
	while(n--){
		inp.clear(); //Se vacía 
			cin>>f;
			for(int i=0; i<f; i++){ //Se lee nombres e id
				cin>>str>>id;
				inp[id].first=str; //El dato first es el nombre
			}
			while(f--){ //Se lee el id y las notas
				cin>>id>>note;
				inp[id].second=note; //El dato second es la nota
			}
			//Se muestra los datos de manera nombre y nota
			for(auto it : inp) //El it toma el valor de la llave
				cout<<it.second.first<<" "<<it.second.second<<"\n";
	}
	return 0;
}
