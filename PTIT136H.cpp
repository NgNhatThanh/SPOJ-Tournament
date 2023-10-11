#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n+5];
    int st=1, en=n;
    map<int, int> mp;
    for(int i=1;i<=n;i++){
      cin>>arr[i];
      mp[arr[i]]=i;
    }
    int buoc[105]={};
    for(int i=1;i<=n;i++){
      if(i%2){
        if(mp[st]!=st){
          buoc[i]=mp[st]-st;
          for(int j=mp[st];j>st;j--){
             mp[arr[j-1]]++;
            swap(arr[j], arr[j-1]);
          }
          mp[st]=st;
        }
        st++;
      }
      else if(i%2==0){
        if(mp[en]!=en){
          buoc[i]=en-mp[en];
        for(int j=mp[en];j<en;j++){
          mp[arr[j+1]]--;
          swap(arr[j], arr[j+1]);
        }
        mp[en]=en;
        }
        en--;
      }
    }
    for(int i=1;i<=n;i++) cout<<buoc[i]<<'\n';
}