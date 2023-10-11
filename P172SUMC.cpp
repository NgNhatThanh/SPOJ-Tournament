#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n<2) {
		if(!n) cout<<1;
		else if(n==1) cout<<8;
	} else {
		n-=2;
		int tmp=n%4;
		if(tmp==0) cout<<4;
		else if(tmp==1) cout<<2;
		else if(tmp==2) cout<<6;
		else cout<<8;
	}
	return 0;
}