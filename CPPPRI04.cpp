#include <stdio.h>
#include <math.h>

int nt[100001];

void sang() {
	int sqr=sqrt(10000);
	for(int i=2; i<=sqr; i++) {
		for(int j=i*i; j<=10000; j+=i) nt[j]=1;
	}
}


int main() {
	sang();
	int a,n;
	scanf("%d",&a);
	while(a--) {
		scanf("%d",&n);
		printf("1 ");
		for(int i=2; i<=n; i++) {
			int k=2;
			while(1) {
				if(i%k==0 && nt[k]==0) {
					printf("%d ",k);
					break;
				}
				k++;
			}
		}
		printf("\n");

	}
}