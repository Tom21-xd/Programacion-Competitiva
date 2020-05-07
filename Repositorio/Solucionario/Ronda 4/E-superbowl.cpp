#Solución 1 - SneiderQuintero 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(0); 
  int n;
  ll s, d, a, b;
  cin>>n;
  while(n--){
  	cin>>s>>d;
  	b=abs(s-d)/2;
  	a=s-b;
  	if(a+b==s && abs(a-b)==d)
  	   cout<<max(a,b)<<" "<<min(a,b)<<"\n";
  	else cout<<"impossible\n";
  }
	return 0;
}

#Solución 2 - JuanJr
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(0); 
  int n;
  ll s, d, a, b;
  cin>>n;
  while(n--){
  	cin>>s>>d;
  	s-=d; //Verificar que la diferencia sea menor a la sumatoria 
  	if(s>=0 && !(s & 1)){
  		s>>=1; //Hayo b
  		d+=s; //Hayo a
  		cout<<max(s,d)<<" "<<min(s,d)<<"\n";
  	}else cout<<"impossible\n";
  }
	return 0;
} 
