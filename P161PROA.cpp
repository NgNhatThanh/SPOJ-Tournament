#include <bits/stdc++.h>

using namespace std;

int nt[1000006];

void sang() {
	nt[1]=1;
	for(int i=2; i<=sqrt(1000000); i++) {
		if(!nt[i]) {
			for(int j=i*i; j<=1000000; j+=i) nt[j]=1;
		}
	}
}

int main() {
	sang();
	int n;
	cin>>n;
	long long arr[n];
	for(long long &x : arr) {
		cin>>x;
		long long tmp = sqrt(x);
		if(tmp*tmp!=x) cout<<"NO\n";
		else {
			if(nt[tmp]==0) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}