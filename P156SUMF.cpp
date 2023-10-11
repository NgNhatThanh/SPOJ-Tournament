#include <bits/stdc++.h>
#define ll long long
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	ll a,b,c;
	cin>>a>>b>>c;
	if(a>=c || b>=c) cout<<0;
	else if((a<=0 && b<=0 && c>min(a,b))) cout<<-1;
	else {
		ll tmp=a;
		a=min(a,b);
		b=max(tmp, b);
		ll cnt=0;
		if(a<0 && b>0) {
			ll tmp =a*-1;
			a=(tmp%b)*-1;
			cnt=tmp/b;
		}
		while(a<c && b<c) {
			ll tmp=a+b;
			ll a1=a;
			ll b1=b;
			a=min(tmp, b1);
			b=max(tmp, b1);
			cnt++;
		}
		cout<<cnt;
	}
}