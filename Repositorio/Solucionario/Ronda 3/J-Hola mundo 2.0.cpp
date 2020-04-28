#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	list<string> inp;
	string str;
	cin>>n;
	while(n--){
		cin>>str;
		if(count(inp.begin(),inp.end(),str)==0) //Con la función count determinó si hay nombre repetido
			inp.emplace_back(str);
		else{
			inp.remove(str); //Remuevo el nombre 
			inp.emplace_back(str); //Lo agregó al final
		}
	}
	for(auto it : inp) 
		cout<<"Hola " <<it<<"\n";

	return 0;
}
//Créditos JuanJr, yo solo lo implemente en c++
