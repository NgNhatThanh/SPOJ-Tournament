#include <stdio.h>

void process() {
	int n;
	int min=100000, max=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		if(arr[i]>max) max=arr[i];
		if(arr[i]<min) min=arr[i];
	}
	printf("%d\n",(max-min)*2);
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}
}