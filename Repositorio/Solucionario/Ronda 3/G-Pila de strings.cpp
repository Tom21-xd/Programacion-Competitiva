#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
	int t,n,c,may,pos;
	string entrada;
	stack<string> pal;
	cin>>n;
	while(n--){
		cin>>entrada;
		if(entrada=="PUSH"){
			cin>>entrada;
			pal.push(entrada);
		}else{
			if(!pal.empty()){
				cout<<pal.top()<<"\n";
				pal.pop();
			}else
				cout<<"-\n";
		}
	}
	return 0;
}
