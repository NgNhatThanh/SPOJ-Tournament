#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9+7;

int gcd(int a, int b){
	if(!b) return a;
	return gcd(b, a%b);
}

ll Pow(ll a, int b){
	if(b==0) return 1;
	ll res=1;
	res = Pow(a, b/2);
	res = ((res%mod)*(res%mod))%mod;
	if(b%2) res = ((res%mod)*(a%mod))%mod;
	return res;
}

int uc(int arr[], int n, int minn){
	int uoc=1e9;
	for(int i=0;i<n;i++){
		uoc = min(uoc, gcd(minn, arr[i]));
	}
	return uoc;
}

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int arr[n];
		ll res = 1;
		int minn = 1e9;
		for(int &x : arr) { 
			cin>>x;
			res*=1ll*x;
			res%=mod;
			minn = min(minn, x);
		}
		int uoc = uc(arr , n, minn);
		cout<<Pow(res, uoc)<<'\n';
	}
}