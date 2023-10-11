#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
	ll a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	if(a==0) {
		if(b==0 && c!=0) printf("0");
		else if(b==0 && c==0) printf("-1");
		else {
			printf("1\n%.5lf",-1.0*(double)c/(double)b);
		}
	} else {
		ll delta = b*b-4*a*c;
		if(delta<0) printf("0");
		else if(delta==0) {
			printf("1\n%.5lf",-1.0*(double)b/(2.0*(double)a));
		} else {
			double x1 = (-1.0*(double)b-sqrt(delta))/(2.0*(double)a);
			double x2 = (-1.0*(double)b+sqrt(delta))/(2.0*(double)a);
			printf("2\n");
			if(x1<=x2) printf("%.5f\n%.5f",x1,x2);
			else printf("%.5f\n%.5f",x2,x1);
		}
	}
}