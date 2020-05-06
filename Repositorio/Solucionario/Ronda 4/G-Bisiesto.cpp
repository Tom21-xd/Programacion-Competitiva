// tu  trabajo ;V
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
int main(){
	fast;
	unsigned long long a,b,c,f,d,res;
	while(cin>>a>>b>>c){
		if(a%b==0){
			c--;
		}else{
			d=b-a%b;
			a=a+d;
		}
		f=b*c;
		res=a-f;
		cout<<res<<endl;
	}
	return 0;
}
