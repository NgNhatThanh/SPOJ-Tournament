#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	int n;
	scanf("%d",&n);
	getchar();
	char a[n+1];
	gets(a);
	int check[30]= {};
	for(int i=0; i<n; i++) {
		a[i]=tolower(a[i]);
		check[a[i]-96]++;
	}
	for(int i=1; i<=26; i++) {
		if(check[i]==0) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");

}