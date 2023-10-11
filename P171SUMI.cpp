#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		map<char, int> mp;
		for(char x : s) {
			mp[x]++;
		}
		int cnt=0;
		for(pair<char, int> x : mp) {
			if(x.second%2) cnt++;
		}
		if(cnt<=3) cout<<"YES\n";
		else cout<<"NO\n";
	}
}