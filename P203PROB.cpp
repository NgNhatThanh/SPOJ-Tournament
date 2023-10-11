#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	ll sum=0;
	while(a--) {
		int n;
		cin>>n;
		int can=sqrt(n);
		for(int i=2; i<=can; i++) {
			while(n%i==0) {
				sum+=i;
				n/=i;
			}
		}
		if(n>1) sum+=n;
	}
	cout<<sum;
}