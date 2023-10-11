#include <stdio.h>

void process() {
	int n;
	scanf("%d",&n);
	while(n/10!=0) {
		int sum=0;
		while(n) {
			sum+=n%10;
			n/=10;
		}
		n=sum;
	}
	printf("%d\n",n);
}


int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}

}