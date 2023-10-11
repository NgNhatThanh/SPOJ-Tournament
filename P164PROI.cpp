#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

ll tohop(int n) {
	ll res=0;
	for(int i=1; i<n; i++) res+=i;
	return res;
}

int main() {
	faster()
	int n;
	cin>>n;
	map<int, int> chinh;
	map<int, int> phu;
	int x,y;
	while(n--) {
		cin>>x>>y;
		chinh[x+y-1]++;
		phu[x-y+1000]++;
	}
	ll res=0;
	for(pair<int, int> x : chinh) {
		if(x.second>=2) res+=tohop(x.second);
	}
	for(pair<int, int> x : phu) {
		if(x.second>=2) res+=tohop(x.second);
	}
	cout<<res;
}