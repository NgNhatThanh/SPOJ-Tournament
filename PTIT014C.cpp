#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int lcs(string a, string b){
  int d1 = a.size(), d2 = b.size();
  int dp[d1+1][d2+1];
  int res=0;
  for(int i=0;i<=d1;i++) dp[i][0]=0;
  for(int i=0;i<=d2;i++) dp[0][i]=0;
  for(int i=1;i<=d1;i++){
    for(int j=1;j<=d2;j++){
      if(a[i-1]==b[j-1]){
        dp[i][j]=dp[i-1][j-1]+1;
        res=max(res, dp[i][j]);
      }
      else{
        dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        res=max(res, dp[i][j]);
      }
    }
  }
  return res;
}
 
int main() {
	int a;
	cin>>a;
	while(a--){
	  int n;
	  cin>>n;
	  string arr[n];
	  int res=0;
	  for(string &x : arr) cin>>x;
	  for(int i=0;i<n-1;i++){
	    for(int j=i+1;j<n;j++) res = max(res , lcs(arr[i], arr[j]));
	  }
	  cout<<res<<'\n';
	}
} 