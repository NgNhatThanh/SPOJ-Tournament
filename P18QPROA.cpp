#include <stdio.h>
#include <math.h>

void process() {
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=1; i<=sqrt(n); i++) {
		if(n%i==0) {
			if(i%2==0) cnt++;
			if((n/i)%2==0 && (n/i)!=i ) cnt++;
		}
	}
	printf("%d\n",cnt);
}

int main () {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}
}