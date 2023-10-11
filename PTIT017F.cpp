#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int sum=0;
		for(char x : s) {
			sum+=x-48;
		}
		int t = s[0]-48;
		if(s.size()>=2) {
			t = (s[s.size()-2]-48)*10+s[s.size()-1]-48;
		}
		if(sum%9==0 && t%4==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
}