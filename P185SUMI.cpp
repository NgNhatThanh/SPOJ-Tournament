#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

vector<int> nt;

bool check(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

void sang() {
	for(int i=2; i<=31625; i++) {
		if(check(i)) nt.emplace_back(i);
	}
}

int main() {
	sang();
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int trong=1, ngoai=1;
		for(int x : nt) {
			if(n%x==0) {
				int mu=0;
				while(n%x==0) {
					mu++;
					n/=x;
				}
				int t1 = pow(x, mu/2);
				int t2 = pow(x, mu%2);
				ngoai*=t1;
				trong*=t2;
			}
		}
		if(n>1) trong*=n;
		cout<<ngoai<<' '<<trong<<'\n';
	}
}