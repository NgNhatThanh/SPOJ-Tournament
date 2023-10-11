#include <iostream>
#include <cmath>
using namespace std;

int tonguoc(int n) {
	int sum=n+1;
	int can=sqrt(n);
	for(int i=2; i<=can; i++) {
		if(n%i==0) {
			sum+=i;
			if(n/i!=i) sum+=n/i;
		}
	}
	return sum;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		int k=tonguoc(n);
		int k2=tonguoc(k);
		if(k2==2*n) cout<<"YES\n";
		else cout<<"NO\n";
	}
}