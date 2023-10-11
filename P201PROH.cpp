#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int m,n;
		cin>>m>>n;
		if(m>=n) cout<<"YES\n";
		else {
			if(m==2 && n==3) cout<<"YES\n";
			else if(m==1 || m==2 || m==3) cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
}