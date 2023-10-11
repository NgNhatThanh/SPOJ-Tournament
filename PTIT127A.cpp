#include <stdio.h>

void process() {
	int m,n,k;
	scanf("%d%d%d",&m,&n,&k);
	int cnt=0;
	while(m>=2 && n>=1) {
		m-=2;
		n-=1;
		cnt++;
	}
	if(m+n>=k) printf("%d",cnt);
	else {
		k-=(m+n);
		cnt*=3;
		cnt=(cnt-k)/3;
		printf("%d",cnt);
	}
}

int main() {
	process();
}