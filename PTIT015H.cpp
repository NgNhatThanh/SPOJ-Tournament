#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		string s;
		for(int i=1; i<=n; i++) {
			string tmp=to_string(i);
			s+=tmp;
		}
		int check=0;
		while(s.size()!=1) {
			string tmp;
			for(int i=check; i<s.size(); i+=2) {
				tmp+=s[i];
			}
			s=tmp;
			if(check) check=0;
			else check=1;
		}
		cout<<s<<'\n';
	}
}