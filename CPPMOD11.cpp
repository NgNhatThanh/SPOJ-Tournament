#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll nhan(ll a, ll b, ll c){
	if(b==1) return a%c;
	ll res=0;
	res=nhan(a,b/2,c);
	res = ((res%c)+(res%c))%c;
	if(b%2) res = ((res%c) + (a%c))%c;
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		cout<<nhan(a,b,c)<<'\n';
	}
}