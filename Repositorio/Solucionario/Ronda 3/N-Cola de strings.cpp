#include <bits/stdc++.h>
using namespace std;

int main()
{
	queue<string> f1;
	string str;
	int n;
	cin>>n;
	while(n--){
		cin>>str;
		if(str=="PUSH"){
			cin>>str;
			f1.push(str);
		}else if(!f1.empty()){
			cout<<f1.front()<<"\n";
			f1.pop();
		}else cout<<"-\n";
	}
	return 0;
}
