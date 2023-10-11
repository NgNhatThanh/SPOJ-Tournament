#include <bits/stdc++.h>

using namespace std;
int uoc[1000005];

void sang() {
	for(int i=1; i<=1e6/2; i++) {
		for(int j=i; j<=1e6; j+=i) {
			if(i!=j) uoc[j]+=i;
		}
	}
}

int main() {
	sang();
	int l,r ;
	cin>>l>>r;
	int res=0;
	for(int i=l; i<=r; i++) {
		if(uoc[i]>i) res++;
	}
	cout<<res;
}