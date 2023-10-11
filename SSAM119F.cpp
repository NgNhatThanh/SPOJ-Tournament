#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		int arr[n+5][m+5];
		int dp[n+5][m+5];
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) cin>>arr[i][j];
		}
		for(int i=0; i<=n; i++) {
			for(int j=0; j<=m; j++) dp[i][j]=1e9;
		}
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				dp[i][j]=min(min(dp[i-1][j-1], dp[i][j-1]), dp[i-1][j]);
				if(dp[i][j]==1e9) dp[i][j]=arr[i][j];
				else dp[i][j]+=arr[i][j];
			}
		}
		cout<<dp[n][m]<<'\n';
	}
}