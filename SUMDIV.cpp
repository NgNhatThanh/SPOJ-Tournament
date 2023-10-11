#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		long long n;
		long long sum=0;
		scanf("%lld",&n);
		long long sqr=sqrt(n);
		for(long long i=1; i<=sqr; i++) {
			if(n%i==0) {
				sum+=i;
				if((n/i)!=i) sum+=(n/i);
			}

		}
		printf("%lld\n",sum);
	}

}
