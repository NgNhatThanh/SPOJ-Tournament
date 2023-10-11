#include <bits/stdc++.h>
using namespace std;

void nhan(string &a, string b){
  vector<int> res;
  if(a.size()<b.size()) swap(a,b);
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  res.resize(a.size()+b.size()+1, 0);
  for(int i=0;i<a.size();i++){
    for(int j=0;j<b.size();j++){
      int k1=a[i]-48;
      int k2=b[j]-48;
      res[i+j]+=k1*k2;
      if(res[i+j]>9){
        res[i+j+1]+=res[i+j]/10;
        res[i+j]%=10;
      }
    }
  }
  while(res.back()==0) res.pop_back();
  reverse(res.begin(), res.end());
  a.resize(res.size(),0);
  for(int i=0;i<res.size();i++) a[i]=res[i]+48;
}
 

int main() 
{
    int a;
    cin>>a;
    while(a--){
      int n;
      char k;
      cin>>n>>k;
      string res="1";
      for(int i=1;i<=n;i++){
        string tmp = to_string(i);
        nhan(res, tmp);
      }
      int cnt=0;
      for(char x : res){
        if(x==k) cnt++;
      }
      cout<<cnt<<'\n';
    }
}