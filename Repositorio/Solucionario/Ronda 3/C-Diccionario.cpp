#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, nP;
	set<string> dic;
	string str;
	cin>>n;
	while(n--){
		dic.clear(); //Se vacía
		cin>>nP;
		while(nP--){
			cin>>str;
			dic.insert(str);
		}
		for(string out: dic)  //Muestra
			cout<<out<<"\n";
		cout<<"-\n";
	}
	return 0;
}
