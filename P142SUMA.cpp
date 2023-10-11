#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

bool check(double a) {
	return a==(ll)a;
}

int main() {
	ll n;
	cin>>n;
	int can = sqrt(2*n);
	for(int i=1; i<=can; i++) {
		ll tmp=i*(i+1)-2*n;
		ll delta = 1-4*tmp;
		if(delta>0) {
			double n1 = (-(double)1+sqrt(delta))/((double)2);
			double n2 = (-(double)1-sqrt(delta))/((double)2);
			if(check(n1) && n1>=i) {
				cout<<"YES";
				return 0;
			}
			if(check(n2) && n2>=i) {
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}