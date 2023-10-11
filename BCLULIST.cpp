#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int n,m;
ll arr[2005][2005];

// quy hoach dong voi arr[i][j] la so day thoa man co do dai i bat dau tu 1 ket thuc tai j
void process(){
  for(int i=1;i<=n;i++){
    for(int j=i;j<=m;j++){
      if(i==1) arr[i][j]=arr[i][j-1]+1;
      else{
        arr[i][j]=arr[i][j-1]+arr[i-1][j/2];
      }
    }
  }
  cout<<arr[n][m]<<'\n';
}
 
int main() 
{
    int a;
    cin>>a;
    int test=1;
    while(a--){
      cin>>n>>m;
      cout<<"Data set "<<test++<<": "<<n<<' '<<m<<' ';
      memset(arr, 0, sizeof(arr));
      process();
    }
}  