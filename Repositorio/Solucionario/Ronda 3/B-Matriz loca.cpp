#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, f, c;
	cin>>n;
	while(n--){
		cin>>f>>c;
		int mtz[f][c] ;
		for(int i=0; i<f; i++){
			for(int j=0; j<c; j++){
				cin>>mtz[i][j]; //Se pide el dato en pos i y j
				if(i%2==0 ) mtz[i][j]++; //Verifica si es una fila par y le suma
				if(j%2==0 ) mtz[i][j]+=2; //Verifica si es una columna par y le suma
				if(i%2!=0 && j%2!=0) mtz[i][j]-=3; //Verifica si es una columna y una fila impar y le resta
			}
		}
		//Muestra la nueva matriz
		for(int i=0; i<f; i++){ 
			for(int j=0; j<c-1; j++){
				cout<<mtz[i][j]<<" ";
			}
			cout<<mtz[i][c-1]<<"\n";
		}
	}
	return 0;
}
