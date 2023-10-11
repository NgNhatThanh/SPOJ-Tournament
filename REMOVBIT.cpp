#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

const int mod=1e9+7;

int main() {
	faster
	string s;
	cin>>s;
	int check=(s[0]=='0');
	for(int i=check; i<s.length(); i++) {
		if(s[i]=='0') {
			s.erase(s.begin()+i);
			check=2;
			break;
		}
	}
	if(check!=2) s.pop_back();
	cout<<s;
}