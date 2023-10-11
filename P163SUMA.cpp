#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int check[27]={};
    ll res=0;
    for(char x : s) check[x-64]++;
    sort(check, check+27, greater<int>());
    for(int x : check){
      if(k<=x){
        res+=k*k;
        break;
      }
      else{
        res+=x*x;
        k-=x;
      }
    }
    cout<<res;
}  