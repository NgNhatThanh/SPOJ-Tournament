#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll C[1005][1005];

ll mod = 1e9+7;

void cal() {
	for(int i=0; i<=1000; i++) {
		for(int j=0; j<=1000; j++) {
			if(i==j || i==0) C[i][j]=1;
			else if(i<j) C[i][j]=(C[i-1][j-1]+C[i][j-1])%mod;
		}
	}
}

int main() {
	cal();
	int a;
	cin>>a;
	while(a--) {
		int n,r;
		cin>>n>>r;
		cout<<C[r][n]<<'\n';
	}
}