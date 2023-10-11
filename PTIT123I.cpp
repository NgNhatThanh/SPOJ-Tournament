#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

int nt[300000]= {};

void sang() {
	nt[1]=1;
	for(int i=2; i<=sqrt(300000); i++) {
		for(int j=i*i; j<=300000; j+=i) nt[j]=1;
	}
}

int main() {
	faster
	sang();
	int n;
	while(cin>>n) {
		if(n==0) return 0;
		int res=0;
		for(int i=n+1; i<=2*n; i++) {
			if(nt[i]==0) res++;
		}
		cout<<res<<'\n';
	}
}