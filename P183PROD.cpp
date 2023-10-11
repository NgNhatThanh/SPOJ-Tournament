#include <stdio.h>
#include <math.h>
#define ll long long

bool check(int n) {
	if(n<2) return 0;
	if(n==2 || n==3) return 1;
	if(n%2==0 || n%3==0) return 0;
	int can=sqrt(n);
	for(int i=5; i<=can; i+=6) {
		if(n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;
}

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	while(1) {
		if(check(m)) {
			printf("%d ",m);
			n--;
			if(!n) break;
		}
		m++;
	}
}