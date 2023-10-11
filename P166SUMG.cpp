#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		if(b==c || (abs(b-c)%3==0 && ((a>0 && b>0) || (a>0 && c>0) || (b>0 && c>0)))) cout<<"YES\n";
		else cout<<"NO\n";
	}
}