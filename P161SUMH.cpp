#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++) cin>>arr[i][j];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        int cnt=0;
        if(i>0 && arr[i-1][j]=='o') cnt++;
        if(j>0 && arr[i][j-1]=='o') cnt++;
        if(i<n-1 && arr[i+1][j]=='o') cnt++;
        if(j<n-1 && arr[i][j+1]=='o') cnt++;
        if(cnt%2){
          cout<<"NO";
          return 0;
        }
      }
    }
    cout<<"YES";
}