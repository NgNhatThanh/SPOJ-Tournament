#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s;
	cin>>s;
	ll res=0;
	for(int i=0; i<s.size(); i++) {
		if((s[i]-48)%4==0) res++;
		if(i<s.size()-1) {
			int t = (s[i]-48)*10+(s[i+1]-48);
			if(t%4==0) {
				res+=i+1;
			}
		}
	}
	cout<<res;
}