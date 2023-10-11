#include <iostream>
using namespace std;

long long gt(long long n) {
	if(n<=1) return 1;
	return n*gt(n-1);
}

int main() {
	while(1) {
		long long n;
		scanf("%lld",&n);
		if(n==0) return 0;
		cout<<gt(n)<<"\n";
	}
}