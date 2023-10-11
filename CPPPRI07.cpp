#include <stdio.h>
#include <math.h>

void process() {
	int n, check=0;
	scanf("%d",&n);
	int sqr=sqrt(n);
	for(int i=2; i<=sqr; i++) {
		int mu=0;
		if(check>3) {
			printf("0\n");
			return;
		}
		if(n%i==0) {
			check++;
			while(n%i==0) {
				mu++;
				if(mu>1) {
					printf("0\n");
					return;
				}
				n/=i;
			}
		}
	}
	if(n!=1) check++;
	if(check!=3) {
		printf("0\n");
		return;
	}
	printf("1\n");
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}


}