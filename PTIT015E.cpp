#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll uoc[1000005];
ll sumuoc[1000005];
ll pruoc[1000005];
ll prsum[1000005];

void sang(){
  for(int i=1;i<=1000000;i++){
    for(int j=i;j<=1000000;j+=i){
      uoc[j]++;
      sumuoc[j]+=i;
    }
  }
  pruoc[1]=prsum[1]=1;
  for(int i=2;i<=1000000;i++){
    pruoc[i]=pruoc[i-1]+uoc[i];
    prsum[i]=prsum[i-1]+sumuoc[i];
  }
}

int main() 
{
    sang();
    int k;
    cin>>k;
    while(k--){
      int a,b;
      cin>>a>>b;
      cout<<pruoc[b]-pruoc[a-1]<<" "<<prsum[b]-prsum[a-1]<<'\n';
    }
}