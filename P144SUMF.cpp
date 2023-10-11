#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int nam=0, nu=0, res=0;
    reverse(s.begin(), s.end());
    while(s.size()>1){
      int t1=nam, t2=nu, t3=nam, t4=nu;
      if(s.back()=='W') t2++;
      else t1++;
      if(s[s.size()-2]=='W') t4++;
      else t3++;
      int d1 = abs(t1-t2), d2 = abs(t3-t4);
      if(d1>x && d2>x) break;
      int d3 = min(d1, d2);
      if(d3==d1){
        if(s.back()=='W') nu++;
        else nam++;
        res++;
        s.pop_back();
      }
      else{
        if(s[s.size()-2]=='W') nu++;
        else nam++;
        res++;
        char tmp = s.back();
        s.pop_back();
        s.pop_back();
        s.push_back(tmp);
      }
    }
    if(abs(nam-nu)<x){
      res++;
    }
    cout<<res;
}