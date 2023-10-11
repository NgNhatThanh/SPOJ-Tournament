#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(double n) {
	return n==(ll)n;
}

int main() {
	ll n;
	cin>>n;
	n*=2;
	int can=sqrt(n);
	for(int i=1; i<=can; i++) {
		ll delta = 1-4*(i*(i+1)-n);
		if(delta>0) {
			double n1 = (-1+sqrt(delta))/2.0;
			double n2 = (-1-sqrt(delta))/2.0;
			if(check(n1) && n1>0 && n1*(n1+1)+i*(i+1)==n) {
				cout<<"YES";
				return 0;
			}
			if(check(n2) && n2>0 && n2*(n2+1)+i*(i+1)==n) {
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}