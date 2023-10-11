#include <bits/stdc++.h>

using namespace std;

#define faster() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int nt[10000001];

void sang() {
	nt[1]=1;
	for(int i=2; i<=10000000/2; i++) {
		for(int j=2*i; j<=10000000; j+=i) nt[j]-=i;
	}
}

void luu() {
	for(int i=2; i<=10000000; i++) {
		nt[i]+=(i-1);
		nt[i]=abs(nt[i]);
	}
}

int main() {
	faster()
	sang();
	luu();
	int m,n;
	cin>>m>>n;
	int tmp=m;
	m=min(m,n);
	n=max(n,tmp);
	long long res=0;
	for(int i=m; i<=n; i++) {
		res+=nt[i];
	}
	cout<<res<<'\n';
}