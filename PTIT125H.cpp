#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
	int a, cnt=1;
	scanf("%d",&a);
	getchar();
	char n[a+1];
	gets(n);
	for(int i=0; i<a; i++) {
		if(n[i]=='S') cnt++;
		else {
			cnt++;
			i++;
		}
	}
	int check=fmin(cnt,a);
	printf("%d",check);

}