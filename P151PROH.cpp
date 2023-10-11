#include <bits/stdc++.h>

using namespace std;

int check(string s) {
	if(s[0]!='1') return 0;
	for(int i=0; i<s.size(); i++) {
		if(s[i]!='1' && s[i]!='4') return 0;
		if(s[i]=='1') {
			int cnt=0;
			for(int j=i+1; j<s.size(); j++) {
				if(s[j]!='1' && s[j]!='4') return 0;
				if(s[j]=='4') cnt++;
				else if(s[i]=='1') break;
			}
			if(cnt>2) return 0;
			i+=cnt;
		}
	}
	return 1;
}

int main() {
	string s;
	cin>>s;
	if(check(s)) cout<<"YES";
	else cout<<"NO";

}