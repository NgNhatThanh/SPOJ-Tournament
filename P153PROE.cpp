#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin>>n;
	ll arr[100005]={};// van chua hieu sao phai khai bao mang rong nhu nay, neu khai bao mang la n+1 thi se bi sai
	ll tmp=0;
	for(int i=0; i<=n; i++) {
		cin>>arr[i];
	}
	for(ll i=n; i>=1; i--) {
		arr[i]+=tmp;
		if(arr[i]%i==0) {
			tmp+=(arr[i]/i);
		} else {
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
}