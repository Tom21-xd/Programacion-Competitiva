//Solución 1 - Johan y Sierra
#include<iostream>
using namespace std;
int main(){
	long int t,m,n,o;
	cin>>t;
	while (t--){
		cin>>m>>n>>o;
		for (int i=0;i<n-1;i++){
			o=o*m;
		}
		cout<<o<<endl;
	}
	return 0;
}

//Solución 2 - SneiderQuintero - Uso de pow
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(0); 
  int n;
  long int r, a, k, aux;
  cin>>n;
  while(n--){
  	cin>>r>>a>>k;
  	a--;
  	aux=pow(r,a);
  	cout<<k*aux<<"\n";
  }
	return 0;
}
