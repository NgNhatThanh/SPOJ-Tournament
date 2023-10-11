#include <stdio.h>
#include <math.h>

int nt[10001]= {};

void sang() {
	nt[1]=1;
	for(int i=2; i<=sqrt(10000); i++) {
		for(int j=i*i; j<=10000; j+=i) nt[j]=1;
	}
}

int main() {
	int a;
	sang();
	int m,n;
	scanf("%d",&a);
	while(a--) {
		scanf("%d%d",&m,&n);
		for(int i=m; i<=n; i++) {
			if(nt[i]==0) printf("%d ",i);
		}
		printf("\n");
	}
}