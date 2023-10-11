#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll C[100][100];

void cal() {
	for(int i=0; i<=60; i++) {
		for(int j=i; j<=60; j++) {
			if(i==j || i==0) C[i][j]=1;
			else {
				C[i][j]=C[i-1][j-1]+C[i][j-1];
			}
		}
	}
}

int main() {
	cal();
	ll res=0;
	ll n,m,t;
	cin>>n>>m>>t;
	for(int i=4; i<=n; i++) {
		if(t-i>=1 && t-i<=m) res+=C[i][n]*C[t-i][m];
	}
	cout<<res;
}