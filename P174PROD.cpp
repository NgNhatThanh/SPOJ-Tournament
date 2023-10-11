#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	map<int, int> mp1;
	map<int, int> mp2;
	int tmp = m ;
	m=max(m, n);
	n=min(tmp, n);
	for(int i=1; i<=m; i++) {
		mp1[i%10]++;
	}
	for(int i=1; i<=n; i++) {
		mp2[i%10]++;
	}
	ll res=0;
	for(pair<int, int>x : mp1) {
		if(x.first==0) res+=1ll*x.second*mp2[5]+1ll*x.second*mp2[0];
		else if(x.first<=5) {
			res+=(1ll*x.second*mp2[5-x.first]+1ll*x.second*mp2[10-x.first]);
		} 
		else res+=1ll*x.second*mp2[15-x.first]+1ll*x.second*mp2[10-x.first];
	}
	cout<<res;
}