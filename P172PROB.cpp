#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int banh=0;
	int tib=0;
	for(int i=0; i<n; i++) {
		if(s[i]=='T') banh=i;
		if(s[i]=='G') tib=i;
	}
	int ok=1;
	if(banh<tib) k*=-1;
	while(1) {
		if(tib==banh) break;
		if(tib+k>=0 && tib+k<n && s[tib+k]!='#') tib+=k;
		else {
			ok=0;
			break;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
}