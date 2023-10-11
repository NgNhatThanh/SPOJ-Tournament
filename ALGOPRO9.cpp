#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll l, r;

int sang() {
	int cnt=0;
	int can = sqrt(r);
	int nt[r-l+1]= {};
	if(l==1) nt[0]=1;
	for(int i=2; i<=can; i++) {
		int tmp = (l+i-1)/i*i;
		for(int j=max(tmp, i*i); j<=r; j+=i) nt[j-l]=1;
	}
	for(int i=0; i<r-l+1; i++) {
		if(nt[i]==0) cnt++;
	}
	return cnt;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		cin>>l>>r;
		cout<<sang()<<'\n';
	}
}