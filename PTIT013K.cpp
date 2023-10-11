#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);
 
int gt(int n){
	if(n==1) return 1;
	return n*gt(n-1);
}
 
int main() {
	faster()
	int a;
	cin >> a;
	while(a--){
		int n;
		cin >> n;
		int res=0;
		int k=1;
		while(n){
			res += (n%10)*gt(k);
			k++;
			n /= 10;
		}
		cout << res << "\n";
	}
}   