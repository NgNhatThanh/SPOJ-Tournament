#include <bits/stdc++.h>
using namespace std;

int cal(int n) {
	int res=1;
	for(int i=2; i<=n; i++) {
		res=res+(2*i-1);
	}
	return res;
}

int main() {
	int a[6];
	for(int &x: a) cin>>x;
	int tg=(a[0]+a[1])*(a[1]+a[2])*2;
	cout<<tg-cal(a[1])-cal(a[4]);
	return 0;
}