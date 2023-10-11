#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() 
{
    ll l, r , k;
    cin>>l>>r>>k;
    int ok=0;
    for(ll i=1;i<=r;i*=k){
      if(i>=l){
        ok=1;
        cout<<i<<' ';
      }
      if(k>(double)(r/i)) break;
    }
    if(!ok) cout<<-1;
}  