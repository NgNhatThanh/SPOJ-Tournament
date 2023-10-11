#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a;
    cin>>a;
    while(a--){
      int n;
      cin>>n;
      ll k;
      cin>>k;
      set<int> se;
      map<int,int> mp;
      while(k){
        int tmp = k%10;
        for(int i=1;i<=tmp;i++){
          int temp=i;
          for(int j=2;j<=sqrt(temp);j++){
          while(temp%j==0){
            mp[j]++;
            se.insert(j);
            temp/=j;
          }          
        }
        if(temp>1){
          se.insert(temp);
          mp[temp]++;
        }
      }
      k/=10;
      }
      string res;
      vector<int> use;
      for(int x : se) use.push_back(x);
      for(int i=use.size()-1;i>=0;i--){
        if(use[i]==7){
          mp[2]-=mp[7]*4;
          mp[3]-=mp[7]*2;
          mp[5]-=mp[7];
          while(mp[7]--) res+='7';
        }
        else if(use[i]==5){
          mp[2]-=mp[5]*3;
          mp[3]-=mp[5];
          while(mp[5]--) res+='5';
        }
        else if(use[i]==3){
          mp[2]-=mp[3];
          while(mp[3]--) res+='3';
        }
        else if(use[i]==2) {
          while(mp[2]--) res+='2';
        }
        //cout<<use[i]<<' '<<mp[use[i]]<<'\n';
      }
      //for(int x : use ) cout<<x<<" "<<mp[x]<<'\n';
      cout<<res<<'\n';
    }
}