#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(!b) return a;
	return gcd(b, a%b);
}

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		n%=360;
		if(!n) cout<<"0$\n";
		else{
			int mau = 180;
			int uc = gcd(n, 180);
			n/=uc; mau/=uc;
			if(n!=1) cout<<n;
			cout<<"$";
			if(mau!=1) cout<<"/"<<mau;
			cout<<'\n';
		}
	}
}