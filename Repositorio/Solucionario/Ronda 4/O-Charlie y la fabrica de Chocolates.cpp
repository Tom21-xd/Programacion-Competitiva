// tu  trabajo ;V
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
