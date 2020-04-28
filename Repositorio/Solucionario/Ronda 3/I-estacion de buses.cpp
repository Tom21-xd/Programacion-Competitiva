//Solución 1 - Johan y Sierra
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
int main(){
  int t,a,b,c;  
  cin>>t;
  queue <int> cola;
  while(t--){
    cin>>a;
    while(a--){
      cin>>b>>c;
      if (c!=0){
        cola.push(c);
      } else {
        if (!cola.empty()){
          cout<<cola.front()<<"\n";
          cola.pop();
        }
      }
    } 
  }
	return 0;
}

//Solución 2 - SneiderQuintero (Fuerza Bruta)
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t,b,op,input,i,j;
	cin>>t;
	while(t--){
		i=j=0;
		cin>>b;
		int registro[b],salida[b];
		while(b--){
			cin>>op>>input;
			if(op==1){
				registro[i]=input;
				i++;
			}else{
				salida[j]=registro[j];
				j++;
			}
		}
		for(i=0; i<j; i++){
			cout<<salida[i]<<"\n";
		}
	}
	return 0;
} 
