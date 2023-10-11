#include <stdio.h>
#include <math.h>

int nt[100001];

void sang() {
	nt[1]=1;
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
		int n;
		scanf("%d",&n);
		for(int i=2; i<=n; i++) {
			if(nt[i]==0) printf("%d ",i);
		}
		printf("\n");
	}
}