#include <bits/stdc++.h>

using namespace std;

#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
	faster()
	int n;
	cin>>n;
	int tmp=n*100;
	int t;
	int luu=0;
	for(int i=0; i<n; i++) {
		cin>>t;
		luu+=t;
	}
	double res=1.0*luu/tmp*100;
	cout<<setprecision(12)<<res;
}