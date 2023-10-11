#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int t=1;
	while(cin>>n) {
		cout<<"Case "<<t++<<": ";
		int a1[n];
		int a2[n];
		map<int, int> mp1;
		map<int, int> mp2;
		for(int &x : a1) cin>>x;
		for(int &x : a2) cin>>x;
		vector<int> t1(a1, a1+n);
		vector<int> t2(a2, a2+n);
		sort(t1.begin(), t1.end(), greater<int>());
		sort(t2.begin(), t2.end(), greater<int>());
		for(int i=0; i<n; i++) {
			mp1[t1[i]]=i+1;
			mp2[t2[i]]=i+1;
		}
		int res=1e9;
		for(int i=0; i<n; i++) {
			if(mp1[a1[i]]!=mp2[a2[i]]) res=min(res, min(mp1[a1[i]], mp2[a2[i]]));
		}
		if(res==1e9) cout<<"agree\n";
		else cout<<res<<'\n';
	}
}