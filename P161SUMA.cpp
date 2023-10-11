#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll a, b;
	cin>>a>>b;
	ll res=0;
	while(b){
		res+=a/b;
		ll tmp = a%b;
		a=b;
		b=tmp;
	}
	cout<<res;
}