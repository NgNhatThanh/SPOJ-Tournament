#include <bits/stdc++.h>
#define ll long long
using namespace std;

int kt(int arr[]) {
	for(int i=0; i<10; i++) {
		if(!arr[i]) return 0;
	}
	return 1;
}

int main() {
	ll n;
	while(cin>>n) {
		int check[10]= {};
		ll k=1;
		ll use=n;
		while(!kt(check)) {
			k++;
			ll tmp = use;
			while(tmp) {
				check[tmp%10]++;
				tmp/=10;
			}
			use=n*k;
		}
		cout<<k-1<<'\n';
	}
}