#include <bits/stdc++.h>
#define ll long long
using namespace std;

int so(char n){
  switch (n){
    case 'A': case 'B': case 'C': return 2;
    case 'D': case 'E': case 'F': return 3;
    case 'G': case 'H': case 'I': return 4;
    case 'J': case 'K': case 'L': return 5;
    case 'M': case 'N': case 'O': return 6;
    case 'P': case 'Q': case 'R': case 'S': return 7;
    case 'T': case 'U': case 'V': return 8;
    default: return 9;
  }
}

int main() 
{
    string s;
    cin>>s;
    int res=0;
    for(char x : s){
      res+=so(x)+1;
    }
    cout<<res;
}