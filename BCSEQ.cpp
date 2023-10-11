#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int &x : arr) cin>>x;
    multiset<int> st;
    set<int> s;
    int l=0, r=0;
    int res=0;
    for(;r<n;r++){
      st.insert(arr[r]);
      s.insert(arr[r]);
      while(s.size()>k){
        int tmp = arr[l];
        st.erase(st.find(arr[l]));
        if(st.find(tmp)==st.end()) s.erase(tmp);
        l++;
      }
      res=max(res, r-l+1);
    }
    cout<<res;
}