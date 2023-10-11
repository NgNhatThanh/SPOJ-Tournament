#include <iostream>
#include <vector>
using namespace std;

//int c,n;        // lam theo quay lui
//int arr[20];
//int res=0;
//
//void Try(int i, int sum=0){
//  if(sum>c || i>n) return;
//  res=max(res, sum);
//  for(int j=i;j<n;j++){
//    Try(j+1, sum+arr[i]);
//  }
//}
//
//int main() 
//{
//    cin>>c>>n;
//    for(int &x : arr) cin>>x;
//    for(int i=0;i<n;i++) Try(i);
//    cout<<res;
//}

// lam theo quy hoach dong

int main() 
{
    int c,n;
    cin>>c>>n;
    int arr[n];
    vector<bool> dp(c+5,0);
    for(int &x : arr){
      cin>>x;
    }
    dp[0]=1;
    for(int x : arr){
      for(int i=c;i>=x;i--){
        if(dp[i-x]==1) dp[i]=1;
      }
    }
    for(int i=c;i>=0;i--){
      if(dp[i]){
        cout<<i;
        return 0;
      }
    }
}