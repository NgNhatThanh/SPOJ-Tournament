#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='r') cout<<i+1<<" ";
  }
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]=='l') cout<<i+1<<' ';
  }
} 