#include <stdio.h>

void process(int m,int n) {
	char a[m+5][n+5];
	int b[105][105]= {};
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			scanf("%c",&a[i][j]);
			if((int)a[i][j]==42) {
				b[i-1][j]++;
				b[i-1][j-1]++;
				b[i-1][j+1]++;
				b[i][j+1]++;
				b[i][j-1]++;
				b[i+1][j-1]++;
				b[i+1][j]++;
				b[i+1][j+1]++;
			}
		}
		getchar();
	}
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			if(a[i][j]=='.') a[i][j]=b[i][j]+48;
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int m,n;
	while(scanf("%d",&m)!=-1) {
		scanf("%d",&n);
		getchar();
		if(n==0) return 0;
		process(m,n);
	}

}