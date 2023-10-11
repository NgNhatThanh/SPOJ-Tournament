#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
	if(a.first+a.second==b.first+b.second) {
		return a.first/2+a.second<b.first/2+b.second;
	}
	return a.first+a.second<b.first+b.second;
}

int main() {
	ll n,b;
	cin>>n>>b;
	pair<ll, ll> arr[n];
	for(pair<ll, ll> &x : arr) cin>>x.first>>x.second;
	sort(arr, arr+n, cmp);
	int res=0;
	ll sum=0;
	int ok=0;
	for(pair<ll, ll> x : arr) {
		sum+=x.first+x.second;
		if(sum>b) {
			if(!ok) {
				ok=1;
				sum-=(x.first+x.second);
				sum+=(x.first/2+x.second);
				if(sum>b) break;
			} else break;
		}
		res++;
	}
	cout<<res;
}