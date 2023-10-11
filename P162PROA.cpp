#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll a,b,x;
	cin>>a>>b>>x;
	ll l=1, r=x*x;
	ll mid;
	ll res;
	while(l<=r) {
		mid = (l+r)/2;
		ll cal = (double)a*pow((double)mid,1.0/3)+b*(double)pow((double)mid,1.0/2);
		if(cal>=x) {
			res=mid;
			r=mid-1;
		} else l=mid+1;
	}
	cout<<res;
}
