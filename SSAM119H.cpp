#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		if(s.size()>1) {
			string tmp="";
			tmp+=s[s.size()-2];
			tmp+=s[s.size()-1];
			s=tmp;
		}
		int k = stoi(s);
		if(k%4) cout<<0;
		else cout<<4;
		cout<<'\n';
	}
}