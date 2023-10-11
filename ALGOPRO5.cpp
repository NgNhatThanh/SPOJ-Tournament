#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    // bieu dien so mm co n chu so giong voi bieu dien so nhi phan, nen se co 2^n so
    int n;
    cin>>n;
    ll res=0;
    for(int i=1;i<=n;i++){
      ll add = pow(2, i);
      res+=add;
    }
    cout<<res;
}