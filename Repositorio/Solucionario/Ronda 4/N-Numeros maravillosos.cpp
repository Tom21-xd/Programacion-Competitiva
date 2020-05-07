#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(0); 
  string input,ward;
  vector<bool> completo; //Lo puede reemplazar con un contador
  int c, par, impar;
  while(cin>>input){
  	completo.clear();
  	c=par=impar=0;
  	for(char i: input){
  		c+=i-48;
  		if((i-48)%2==0) par++;
  		else impar++;
  	}
  	if(par>0 && impar>0) 
  		completo.emplace_back(1);
	  while(c>=10){
	  	ward=to_string(c);
	  	c=par=impar=0;
	  	for(char i: ward){
  			c+=i-48;
  			if((i-48)%2==0) par++;
  			else impar++;
  		}
  		if(par>0 && impar>0) 
  			completo.emplace_back(1);
	  }
	  if(completo.size()>0)
	     cout<<"maravilloso de orden "<<completo.size()<<"\n";
	  else cout<<"no es maravilloso\n";
	} 
	return 0;
}
