#include <bits/stdc++.h>
#define ll long long

using namespace std;

// so nghiem cua pt la uoc cua n^2
// tham khao: https://stackoverflow.com/questions/9469898/1-x-1-y-1-nfactorial
int main() {
	int a;
	cin>>a;
	while(a--) {
		ll n;
		cin>>n;
		ll tmp=n*n;
		int cnt=1+(n>1);
		for(int i=2; i<=n; i++) {
			if(tmp%i==0) {
				cnt++;
				if(tmp/i!=i) cnt++;
			}
		}
		cout<<cnt<<'\n';
	}
}