#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

const int mod=1e9+7;

int main() {
	faster
	string s;
	cin>>s;
	int dai=s.length();
	int cnt=0;
	for(int i=dai-1; i>=0; i--) {
		cnt++;
		if(cnt==3 && i!=0) {
			cnt=0;
			s.insert(i,",");
		}
	}
	cout<<s;
}