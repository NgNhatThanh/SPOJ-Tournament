#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	if(!b) return a;
	return gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;
	while(t--){
		ll a;
		string b;
		cin >> a >> b;
		ll c = 0;
		for(char x : b){
			c = (c*10 + x - '0') % a;
		}
		cout << gcd(a, c) << '\n';
	}
}