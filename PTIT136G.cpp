#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int r, c;
    cin>>r>>c;
    string arr[r];
    for(string &x : arr) cin>>x;
    string minn = "zzzzzzzzzzzzzzzzzzzzzz";
    for(string x : arr){
      string tmp = x;
      stringstream ss(tmp);
      string a;
      while(getline(ss, a, '#')){
        if(a<minn && a.size()>=2) minn=a;
      }
    }
    for(int i=0;i<c;i++){
      string tmp = "";
      for(int j=0;j<r;j++) tmp+=arr[j][i];
      stringstream ss(tmp);
      string a;
      while(getline(ss, a, '#')){
        if(a<minn && a.size()>=2) minn=a;
      }
    }
    cout<<minn;
}