//Solución 1 - SneiderQuintero O(n*log n) 
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
	int t,n,c,may,pos;
	string entrada;
	vector<string> pal;
	cin>>n;
	while(n--){
		pal.clear();
		cin>>t;
		for(int i=0; i<t; ++i){
			cin>>entrada;
			pal.push_back(entrada);
		}
		sort(pal.begin(),pal.end());
		c=1;	may=pos=0;
		for(int i=0; i<t-1; ++i){
			if(pal[i]==pal[i+1]){
				c++;
				if(may<c){
					pos=i;
					may=c;
				}
			}else c=1;
		}
		cout<<pal[pos]<<"\n";
	}
	return 0;
}
//Solución 2 - JuanJr O(n)
#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        unordered_map<string, int> um;
        while(n--){
            cin >> s;
            ++um[s];
        }
        int mx = 0;
        string ss = "";
        for(auto& i: um){
            if(i.S == mx) {if(ss > i.F || ss == "") ss = i.F;}
            else if(i.S > mx){mx = i.S; ss = i.F;}
        }
        cout << ss << "\n";
    }
	return 0;
}
