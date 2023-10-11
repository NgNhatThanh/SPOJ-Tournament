#include <bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster
	int a,b,c;
	while(cin >> a >> b >> c){
		if(a == 0) return 0;
		a *= a; b *= b; c *= c;
		if(a == b+c || b == a+c || c == a+b) cout << "right\n";
		else cout << "wrong\n";
	}
}  