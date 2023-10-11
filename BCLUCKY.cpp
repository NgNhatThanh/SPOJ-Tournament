#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
	long long n,x;
	cin>>n>>x;
	long long arr[n];
	map<long long, long long> mp;
	for(long long &x : arr){
		cin>>x;
		mp[x]++;
	}
	long long maxx=0;
	long long sl=1e9;
	for(long long x : arr){
		if(mp[x]>0){
			if(mp[x]<=sl) {
				sl=mp[x];
				mp[x]=0;
				maxx=max(maxx, x);
			}
		}
	}
	long long res = n*x-sl*maxx;
	cout<<res;
}