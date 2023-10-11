#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int k=0;
	while(1) {
		int tmp =5*pow(2,k);
		if(tmp>=n) break;
		k++;
		n-=tmp;
	}
	int cnt=1;
	int t = pow(2,k);
	//cout<<n;
	while(1) {
		if(n<=t) break;
		n-=t;
		cnt++;
	}
	cout<<cnt;
}