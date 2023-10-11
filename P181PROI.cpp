#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int res=0;
	for(int i=0; i<n-2; i++) {
		string tmp =s.substr(i,3);
		if(tmp=="010") {
			s[i+2]='1';
			i+=2;
			res++;
		}
	}
	cout<<res;
}