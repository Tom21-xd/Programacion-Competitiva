#Solución 1 - SneiderQuintero - time: 0.726s
def main():
    from sys import stdin, stdout
    n = stdin.readline()
    n=int(n)
    while n:
    	n-=1
    	a = int(stdin.readline())
    	print(pow(66,a,100))
if __name__ == "__main__":
    main()

#Solución 2 - Johan y Sierra - time: 0.740s
case = int(input())
for _ in range(case):
    f=int(input())
    print(pow(66,f,100))

#Solución 3 - JuanJr - C++ - time: 0.012s
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int t;
    //Detección de ciclos
    int sol[] = {56, 96, 36, 76, 16};
    cin >> t;
    while(t--){
        cin >> s;
        if(s == "1") cout << "66\n";
        else if (s == "0") cout << "1\n";
        else cout << sol[(s[s.size() - 1] - '0' - 2 + 5) % 5] << "\n";
    }
    return 0;
}
