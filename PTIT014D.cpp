#include <bits/stdc++.h>
using namespace std;
 
int check(string s){
  int sum=0;
  for(char x : s){
    sum += x-48;
  }
  if(sum%9==0 && sum) return 1;
  int tmp=0;
  while(sum){
    tmp += sum%10;
    sum /= 10;
  }
  if(tmp%9==0 && tmp) return 1;
  return 0;
}
 
int main() 
{
    int a;
    cin >> a;
    cin.ignore();
    while(a--){
      string s;
      cin >> s;
      cout << check(s) << '\n';
    }
}  