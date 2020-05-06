// tu  trabajo ;V
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
int main(){
	fast;
	int a=0,b=0,c=0,cas,re=0;
	while(cin>>cas){
		re=cas/3;
		a=re;
		b=re;
		c=re;
		if(cas%3==1){
			a++;
		}else{
			if(cas%3==2){
				a++;
				b++;
			}
		}
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
