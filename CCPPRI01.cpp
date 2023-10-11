#include <stdio.h>
#include <math.h>

void ptngto(long long n) {
	int sqr=sqrt(n);
	for(int i=2; i<=sqr; i++) {
		while(n%i==0) {
			printf("%d ",i);
			n/=i;
		}
	}
	if(n!=1) printf("%lld",n);
}

int main() {
	int a;
	long long n;
	scanf("%d",&a);
	while(a--) {
		scanf("%lld",&n);
		ptngto(n);
		printf("\n");
	}
}