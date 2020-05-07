#include <bits/stdc++.h>
using namespace std;
#define w while
//Todos los digitos de cada base numérica 
string modulo = "0123456789abcdef";
//Método recursivo para hacer la conversión
void conver(int n, int b){
    if (n){
        conver(n/b, b);
        cout << modulo[n%b];
    }
} 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, i=1, ward;
  string num, base;
  cin>>n;
  w(n--){
    cout<<"Case "<<i++<<":\n";
    cin>>num>>base;
    if(base=="bin"){
        ward = stoi(num,0,2);//Bin to Dec
       cout<<ward<<" dec\n";
       conver(ward,16);
       cout<<" hex\n";
    }else if(base=="hex"){
        ward = stoi(num,0,16);//Hex to Dec
       cout<<ward<<" dec\n";
       conver(ward,2);
       cout<<" bin\n";
    }else{
        ward = stoi(num);//Dec to Dec 
       conver(ward,16);
       cout<<" hex\n";
       conver(ward,2);
       cout<<" bin\n";
    }
    cout<<"\n";
  }
  return 0;
}
