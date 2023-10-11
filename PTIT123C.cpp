#include <bits/stdc++.h>
#define ll long long
using namespace std;

int test=1;

struct cp{
	int idx;
	int gia;
};

int cmp(cp a, cp b){
  if(a.gia!=b.gia){
    return a.gia<b.gia;
  }
  return a.idx<b.idx;
}

int main() {
	int n,m,k;
	while(cin>>n>>m>>k){
	  if(!n) return 0;
	  cout<<"Case "<<test++<<'\n';
	  cp arr[n+1];
	  for(int i=1;i<=n;i++){
	    cin>>arr[i].gia;
	    arr[i].idx=i;
	  }
	  sort(arr+1, arr+n+1, cmp);
	  int i=1;
	  vector<int> maxx;
	  vector<int> minn;
	 while(m--){
	   maxx.push_back(arr[i++].idx);
	 }
	 i=n;
	 while(k--){
	   minn.push_back(arr[i--].idx);
	 }
	 sort(maxx.begin(), maxx.end());
	 sort(minn.begin(), minn.end(), greater<int>());
	 for(int x : maxx) cout<<x<<" ";
	 cout<<'\n';
	 for(int x : minn) cout<<x<<" ";
	 cout<<'\n';
	}
} 