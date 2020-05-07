#include <bits/stdc++.h>
using namespace std;
#define w while
#define forn(n) for(int i=0;i<n;i++)
#define emp emplace_back
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string a1, b1, c1, d1, e1;
  w(cin>>a1>>b1>>c1>>d1>>e1){
    if(a1=="NO"&& b1=="NO" && c1=="NO" && d1=="NO" && e1=="NO")
       cout<<"abracadabra, tu numero es: 0\n";
    else{
       int a[]={1,3,5,7,9,11,13,17,19,21,23,25,27,29,31,15};
    int b[]={2,3,6,7,10,11,14,18,19,22,23,26,27,30,31, 15};
    int c[]={4,5,6,7,12,13,14,20,21,22,23,28,29,30,31,15};
    int d[]={8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31};
    int e[] ={16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    if(a1=="NO"){
      forn(16){
        for(int j=0; j<16;j++){
          if(e[j]==a[i]) e[j]=-1;
          if(d[j]==a[i]) d[j]=-1;
          if(c[j]==a[i]) c[j]=-1;
          if(b[j]==a[i]) b[j]=-1;
        }
        a[i]=-1;
      }
    }
    if(b1=="NO"){
      forn(16){
        for(int j=0; j<16;j++){
          if(e[j]==b[i]) e[j]=-1;
          if(d[j]==b[i]) d[j]=-1;
          if(c[j]==b[i]) c[j]=-1;
          if(a[j]==b[i]) a[j]=-1;
        }
        b[i]=-1;
      }
    }
    if(c1=="NO"){
      forn(16){
        for(int j=0; j<16;j++){
          if(e[j]==c[i]) e[j]=-1;
          if(d[j]==c[i]) d[j]=-1;
          if(b[j]==c[i]) b[j]=-1;
          if(a[j]==c[i]) a[j]=-1;
        }
        c[i]=-1;
      }
    }
    if(d1=="NO"){
      forn(16){
        for(int j=0; j<16;j++){
          if(e[j]==d[i]) e[j]=-1;
          if(a[j]==d[i]) a[j]=-1; 
          if(b[j]==d[i]) b[j]=-1;
          if(c[j]==d[i]) c[j]=-1;
        }
        d[i]=-1;
      }
    }
    if(e1=="NO"){
      forn(16){
        for(int j=0; j<16;j++){
          if(d[j]==e[i]) d[j]=-1;
          if(a[j]==e[i]) a[j]=-1; 
          if(b[j]==e[i]) b[j]=-1;
          if(c[j]==e[i]) c[j]=-1;
        }
        e[i]=-1;
      }
    }
    //Salida
    list<int>ans;
    forn(16){
      if(a1=="SI")
        if(a[i]!=-1) ans.emp(a[i]);
      if(b1=="SI")
        if(b[i]!=-1) ans.emp(b[i]); 
      if(c1=="SI")
        if(c[i]!=-1) ans.emp(c[i]);
      if(d1=="SI")
        if(d[i]!=-1) ans.emp(d[i]);
      if(e1=="SI")
        if(e[i]!=-1) ans.emp(e[i]);
    }
    int con=0, out;
    for(auto it:ans){
      int aux=  count(ans.begin(),ans.end(),it);
      if(aux>con){
        con=aux;
        out=it;
      }
    }
    cout<<"abracadabra, tu numero es: "<<out<<endl; 
    } 
  }
  
  return 0;
}
                    
 
