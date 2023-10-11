#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b) {
	return a.second<=b.second;
}

int main() {
	ll n,r,a;
	cin>>n>>r>>a;
	pair<int, int> arr[n];
	ll sum=a*n;
	for(pair<int, int> &x : arr) {
		cin>>x.first>>x.second;
		sum-=x.first;
	}
	sort(arr, arr+n, cmp);
	if(sum<=0) cout<<0;
	else {
		ll res=0;
		for(pair<int, int> x : arr) {
			if(!sum) break;
			int tmp=min(r-x.first,sum);
			sum-=tmp;
			res+=1ll*tmp*x.second;
			//cout<<x.first<<' '<<x.second<<'\n';
		}
		cout<<res;
	}
}