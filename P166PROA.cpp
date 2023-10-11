#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a1[1002][1002];
int b1[1002][1002];

int main() 
{
  int n;
  cin>>n;
  int a[n];
  int b[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    for(int j=0;j<n;j++){
      for(int k=i;k<n;k++) a1[j][k]|=a[i];
    }
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
    for(int j=0;j<n;j++){
      for(int k=i;k<n;k++) b1[j][k]|=b[i];
    }
  }
  ll res=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      ll tmp =a1[i][j]+b1[i][j];
      res=max(res, tmp);
      
    }
  }
  cout<<res;
}