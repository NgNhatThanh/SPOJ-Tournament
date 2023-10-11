#include <iostream>
#define ll long long
using namespace std;

ll mod = 123456789;

// Ta thay: goi S(n) la so cach phan tich so n
// S(1) = 1;
// S(n) = S(0) + S(1) + S(2) +...+ S(n-2) + S(n-1)
//      = S(n-1) + S(n-1)
// => S(n) = 2^(n-1)
ll Powmod(ll n){
  if(n==0) return 1;
  ll res=Powmod(n/2);
  res=((res%mod)*(res%mod))%mod;
  if(n%2) res=((res%mod)*2)%mod;
  return res;
}

int main() 
{
    ll n;
    cin>>n;
    cout<<Powmod(n-1);
}