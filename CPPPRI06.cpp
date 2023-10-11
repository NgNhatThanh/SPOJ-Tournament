#include <stdio.h>
#include <math.h>

int nt[100001]= {};

void sang() {
	nt[1]=1;
	int sqr=sqrt(100000);
	for(int i=2; i<=sqr; i++) {
		for(int j=i*i; j<=100000; j+=i) nt[j]=1;
	}
}

int main() {
	sang();
	int a,n;
	scanf("%d",&a);
	while(a--) {
		scanf("%d",&n);
		for(int i=2; i<=n/2; i++) {
			if(nt[i]==0 && nt[n-i]==0) {
				printf("%d %d\n",i,n-i);
				break;
			}
		}
	}
}