#include <bits/stdc++.h>
#define ll long long
using namespace std;

// bai nay phai xu ly so nguyen lon do co the len den 10^(10^5)
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
  string s;
  cin>>s;
  string res="1";
  string mul="10";
  int check[15]={};
  if(!isdigit(s[0])){
      if(s[0]=='?') res="9";
      else{
        check[s[0]-64]=-1;
        res="9";
        mul="9";
      }
  }
  int cnt=0;
  for(int i=1;i<s.size();i++){
      if(s[i]=='?'){
        cnt++;
      }
      else if(s[i]>='A' && s[i]<='J'){
        if(check[s[i]-64]!=-1) check[s[i]-64]++;
      }
    }
    if(cnt){
      string tmp ="1";
      while(cnt--) tmp+='0';
      nhan(res, tmp);
    }
    for(int i=1;i<=10;i++){
      if(check[i]>0){
        nhan(res,mul);
        if(mul=="10") mul="9";
        else {
          mul[0]--;
        }
      }
    }
    cout<<res;
}