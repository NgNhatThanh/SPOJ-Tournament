#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int n, cnt=1;
	scanf("%d",&n);
	int arr[n];
	int pre[n];
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	qsort(arr,n,4,cmp);
	pre[0]=arr[0];
	for(int i=1; i<n; i++) {
		if(pre[i-1]>arr[i]) {
			arr[i]=0;
			pre[i]=arr[i]+pre[i-1];
		} else {
			pre[i]=arr[i]+pre[i-1];
			cnt++;
		}
	}
	printf("%d",cnt);
}