#include <stdio.h>

void swap(int *a) {
	if(*a==0) *a=1;
	else *a=0;
}

void process() {
	int n,cnt=0;
	scanf("%d",&n);
	int arr[101]= {};
	for(int i=2; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			if(j%i==0) swap(&arr[j]);
		}
	}
	for(int i=1; i<=n; i++) {
		if(arr[i]==0) cnt++;
	}
	printf("%d\n",cnt);
}


int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}

}