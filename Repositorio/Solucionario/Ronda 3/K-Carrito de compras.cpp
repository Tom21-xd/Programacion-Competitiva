#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, f, c, prec, total;
	vector<string> inp, out;
	unordered_map<string, int> dic; //Como no hay necesidad de ordenar, uso esta estructura
	string str;
	cin>>n;
	while(n--){
		total=0;
		cin>>f;
		while(f--){ //Lista de productos 
			cin>>str>>prec;
			dic[str] = prec;
		}
		cin>>c;
		while(c--) { //Averiguar valor total
			cin>>str>>prec;
			total+=dic[str]*prec; //Se multiplica el dato guardado en el producto por la cantidad
		}
		cout<<total<<"\n";
	}
	
	return 0;
}
