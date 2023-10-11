#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		int res=1;
		for(int i=1; i<s.size(); i++) {
			if(i>1 && s[i]==s[i-2]) {
				int len=1;
				int l=i-2, r=i;
				while(l>=0 && r<s.size()) {
					if(s[l]==s[r]) len+=2;
					else break;
					l--;
					r++;
				}
				res = max(res, len);
			}
			if(s[i]==s[i-1]) {
				int len=0;
				int l=i-1, r=i;
				while(l>=0 && r<s.size()) {
					if(s[l]==s[r]) len+=2;
					else break;
					l--;
					r++;
				}
				res = max(res, len);
			}
		}
		cout<<res<<'\n';
	}
}