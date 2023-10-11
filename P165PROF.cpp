#include <stdio.h>
#define ll long long

bool check[200005];

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		check[arr[i]]=1;
	}
	int tmp[n];
	int k=0;
	for(int i=200000; i>=0; i--) {
		if(check[i]) tmp[k++]=i;
	}
	int res=0;
	int m = tmp[0];
	for(int i=0; i<k; i++) {
		if(tmp[i]<=res) continue;
		for(int j=i+1; j<k; j++) {
			if(tmp[i]%tmp[j]>res) res=tmp[i]%tmp[j];
		}
	}
	printf("%d",res);

}