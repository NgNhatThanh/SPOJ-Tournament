#include <iostream>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	int n;
	cin>>n;
	int k=n/4;
	if(n%4) {
		int tmp = n%4;
		while(tmp%7 && k>=0) {
			tmp+=4;
			k--;
		}
		if(k<0) cout<<-1;
		else {
			while(k--) cout<<4;
			tmp=tmp/7;
			while(tmp--) cout<<7;
		}
	} else {
		while(k--) cout<<4;
	}
}