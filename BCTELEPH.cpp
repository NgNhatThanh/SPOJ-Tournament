#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		string arr[n];
		int check=1;
		map<string, int> mp;
		int be = 12;
		for(int i=0; i<n; i++) {
			cin>>arr[i];
			mp[arr[i]]=1;
			int si = arr[i].size();
			be=min(be, si);
		}
		for(int i=0; i<n; i++) {
			if(arr[i].size()>be){
				for(int j=be;j<arr[i].size();j++){
					string tmp = arr[i].substr(0, j);
					if(mp[tmp]) check=0;
				}
			}
		}
		if(!check) cout<<"NO\n";
		else cout<<"YES\n";
	}
}