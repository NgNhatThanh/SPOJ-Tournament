#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll a[4][3];
		for(int i=0; i<4; i++) {
			for(int j=0; j<3; j++) cin>>a[i][j];
		}
		ll  x1=a[1][0]-a[0][0];
		ll y1=a[1][1]-a[0][1];
		ll z1=a[1][2]-a[0][2];
		ll x2=a[2][0]-a[0][0];
		ll y2=a[2][1]-a[0][1];
		ll z2=a[2][2]-a[0][2];
		ll x=y1*z2-y2*z1;
		ll y=z1*x2-z2*x1;
		ll z=x1*y2-x2*y1;
		if(x*(a[3][0]-a[0][0])+y*(a[3][1]-a[0][1])+z*(a[3][2]-a[0][2])==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
}