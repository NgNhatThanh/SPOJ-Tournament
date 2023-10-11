#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll cn[2];
	ll tg[3];
	for(ll &x : cn) cin>>x;
	for(ll &x : tg) cin>>x;
	sort(cn, cn+2);
	sort(tg, tg+3);
	if(tg[2]*tg[2]!=tg[0]*tg[0]+tg[1]*tg[1]) cout<<"NO";
	else {
		if(tg[0]<=cn[0] && tg[1]<=cn[1]) cout<<"YES";
		else cout<<"NO";
	}
}