#include <bits/stdc++.h>
using namespace std;

int cal(int n){
  int res = n*(n/2+n%2);
  if(n&2==0) res+=n/2;
  return res;
}

int main() 
{
   int n;
   cin>>n;
   int sum=0;
   for(int i=1;i<=10000;i++){
     sum+=cal(i);
     if(sum>n){
       cout<<i-1;
       return 0;
     }
     if(sum==n){
       cout<<i;
       return 0;
     }
   }
}