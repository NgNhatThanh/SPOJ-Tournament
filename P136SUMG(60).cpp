#include <stdio.h>
#include <string.h>

int main() {
	int n,c;
	scanf("%d%d",&n,&c);
	int arr[n+5];
	for(int i=1; i<=n; ++i) scanf("%d",&arr[i]);
	int cnt[c+5];
	int k;
	int l,r;
	scanf("%d",&k);
	while(k--) {
		scanf("%d%d",&l,&r);
		memset(cnt, 0, sizeof(cnt));
		int m=0;
		int idx=0;
		for(int i=l; i<=r; ++i) {
			cnt[arr[i]]++;
			if(cnt[arr[i]]>m) {
				m=cnt[arr[i]];
				idx=i;
			}
		}
		if(m>(r-l+1)/2) printf("yes %d",arr[idx]);
		else printf("no");
		printf("\n");
	}
}