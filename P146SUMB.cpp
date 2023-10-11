#include <bits/stdc++.h>
#define ll long long
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0; i<=n; i++) {
		int k=0;
		int k2=i-1;
		for(int j=0; j<=2*n+2*i; j++) {
			if(j>=2*n-2*i && j<=2*n) {
				if(j%2==0) cout<<k++;
				else cout<<' ';
			} else if(j>2*n) {
				if(j%2==0) cout<<k2--;
				else cout<<' ';
			} else cout<<' ';
		}
		cout<<'\n';
	}
	for(int i=n-1; i>=0; i--) {
		int k=0;
		int k2=i-1;
		for(int j=0; j<=2*n+2*i; j++) {
			if(j>=2*n-2*i && j<=2*n) {
				if(j%2==0) cout<<k++;
				else cout<<' ';
			} else if(j>2*n) {
				if(j%2==0) cout<<k2--;
				else cout<<' ';
			} else cout<<' ';
		}
		if(i>0) cout<<'\n';
	}
}