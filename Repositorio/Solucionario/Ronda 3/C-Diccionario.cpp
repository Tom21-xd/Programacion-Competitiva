#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, f;
	set<string> dic;
	string str;
	cin>>n;
	while(n--){
		dic.clear(); //Se vacía
		cin>>f;
		while(f--){
			cin>>str;
			dic.insert(str);
		}
		for(string out: dic)  //Muestra
			cout<<out<<"\n";
		cout<<"-\n";
	}
	return 0;
}
