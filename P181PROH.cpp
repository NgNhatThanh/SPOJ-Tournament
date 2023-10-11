#include <stdio.h>
#include <math.h>
int main() {
	long long a,b;
	int dem=0;
	scanf("%lld%lld",&a,&b);
	if(a==b) printf("infinity");
	else if(a<b) printf("0");
	else {
		if(a/(a-b)!=1) dem=0;
		else {
			long long x=a-b;
			long long sqr=sqrt(x);
			for(long long i=1; i<=sqr; i++) {
				if(a%i==b) dem++;
				long long k=x;
				k/=i;
				if(x%i==0 && a%k==b && k!=i) dem++;
			}
		}
		printf("%d",dem);

	}
}