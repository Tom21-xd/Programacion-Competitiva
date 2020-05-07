#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(0); 
  set<pair<int, int>>s;
  int a, b;
  while(cin>>a>>b){
  	s.insert(make_pair(a,b));
  }
  for(auto it: s)
  	cout<<it.first<<" "<<it.second<<"\n";
  return 0;
} 
