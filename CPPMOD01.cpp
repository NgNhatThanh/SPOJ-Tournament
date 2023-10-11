#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll Pow(ll x, ll y, ll p){
	if(y==0) return 1;
	ll res = Pow(x, y/2, p);
	res = ((res%p)*(res%p))%p;
	if(y%2) res = ((res%p)*x)%p;
	return res;
}

int main() {
	int a;
	cin>>a;
	while(a--){
		ll x, y, p;
		cin>>x>>y>>p;
		cout<<Pow(x,y,p)<<'\n';
	}
}