#include <bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
const int mod=1e9+7;
 
int main() {
	faster
	int a;
	cin >> a;
	while(a--){
		double n, l, m;
		cin >> n >> l >> m;
		double f=log(m/n);
		double la=log(1+l/100);
		int res=ceil(f/la);
		cout << res << '\n';
	}
}  