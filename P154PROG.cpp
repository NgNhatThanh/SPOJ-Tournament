#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
   int n,k;
   cin>>n>>k;
   int res=0;
   int l ,r;
   while(n--){
     cin>>l>>r;
     res+=(r-l+1);
   }
   cout<<(res+k-1)/k*k-res;
}  