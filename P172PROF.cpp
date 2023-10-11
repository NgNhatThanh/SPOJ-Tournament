#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	faster()
	ll x,k,a,b,t;
	cin>>x>>k>>a>>b>>t;
	ll res=0;
	int check=1;
	while(x) {
		if(check) {
			if(a<b) {
				check=0;
				ll tmp= min(x, k);
				res+=tmp*a;
				x-=tmp;
			} else {
				res+=x*b;
				x=0;
			}
		} 
		else { // neu da hong xe thi chi can xet min ( tg sua xe + di xe, tg di bo )
			ll tmp=min(x, k);
			if(tmp*a+t<b*tmp) {
				res+=(x/tmp)*(a*tmp+t);
				x-=(x/tmp)*tmp;
			} else {
				res+=(x/tmp)*tmp*b;
				x-=(x/tmp)*tmp;
			}
		}
	}
	cout<<res;
}