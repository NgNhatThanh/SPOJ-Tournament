#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// tim tat ca cach chia xau thanh 3 xau con roi tim xau nho nhat
    string s;
    cin>>s;
    vector<string> res;
    for(int i=1;i<=s.size()-2;i++){
      for(int j=1;j<=s.size()-i-1;j++){
        string t1 = s.substr(0, i);
        string t2 = s.substr(i, j);
        string t3 = s.substr(i+j, s.size()-i-j);
        reverse(t1.begin(), t1.end());
        reverse(t2.begin(), t2.end());
        reverse(t3.begin(), t3.end());
        string r = t1+t2+t3;
        res.push_back(r);
      }
    }
    sort(res.begin(), res.end());
    cout<<res[0];
}