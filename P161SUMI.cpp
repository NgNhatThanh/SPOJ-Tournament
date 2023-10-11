#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int check[27]={};
    for(char x : s) check[x-64]++;
    sort(check, check+27, greater<int>());
    ll res = 0;
    for(int x : check){
      if(k>x){
        res+=pow(x,2);
        k-=x;
      }
      else{
        res+=pow(x,2);
        break;
      }
    }
    cout<<res;
}