#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a;
    cin>>a;
    while(a--){
      int m,n;
      cin>>n>>m;
      int arr[m][n];
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) cin>>arr[i][j];
      }
      ll res=1e18;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          ll sum=0;
          for(int k=0;k<m;k++){
            for(int z=0;z<n;z++){
              sum+=arr[k][z]*(abs(k-i)+abs(z-j));
            }
          }
          res = min(res, sum);
        }
      }
      cout<<res<<'\n';
    }
}