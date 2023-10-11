#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	map<int, int > mp;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	long long res=0;
	for(int i=0;i<n;i++){
		if(mp[k-arr[i]]>0 && mp[arr[i]]){
			res+=1ll*mp[arr[i]]*mp[k-arr[i]];
			mp[arr[i]]=mp[k-arr[i]]=0;
		}
	}
	cout<<res;
}