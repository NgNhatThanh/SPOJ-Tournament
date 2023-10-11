#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n, k;
   cin>>n>>k;
   int arr[n+5];
   for(int i=1;i<=n;i++){
     cin>>arr[i];
   }
   int res=0;
   for(int i=1;i<=n;i++){
     if(arr[i]>=arr[k] && arr[i]>0) res++;
   }
   cout<<res;
}