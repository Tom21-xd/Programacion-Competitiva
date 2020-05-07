#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(0); 
  int i, j, mn, mx, c, ans;
  while(cin>>i>>j){
  	ans=0;
  	mn = min(i, j);
  	mx = max(i, j);
  	for(int k = mn; k<=mx; k++){
  		c=1;
  		int ward=k;
  		while(ward!=1){
  			if(ward & 1) ward=(ward*3)+1;
  			else ward/=2;
  			c++;
  		}
  		ans=c>ans?c:ans;
  	}
  	cout<<i<<" "<<j<<" "<<ans<<"\n";
  }
	return 0;
} 
