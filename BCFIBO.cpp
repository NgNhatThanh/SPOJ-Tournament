#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

long long arr[1000001]= {0,1};

const int mod=1e9+7;

int main() {
	faster
	int n;
	cin>>n;
	int i=2;
	while(n--) {
		arr[i]=(arr[i-1]+arr[i-2])%mod;
		i++;
	}
	cout<<arr[i-2];
}