#include <iostream>
#include <cmath>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=2; i<=sqrt(n); i++) {
		int mu=0;
		while(n%i==0) {
			mu++;
			n/=i;
		}
		if(mu) {
			printf("%d %d\n",i,mu);
		}
	}
	if(n!=1) printf("%d 1",n);

}