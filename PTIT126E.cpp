#include <stdio.h>
#include <string.h>

int main() {
	char a[71];
	while(scanf("%s",a)!=-1) {
		if(a[0]=='#') return 0;
		getchar();
		int co=0, khong=0, vang=0;
		for(int i=0; i<strlen(a); i++) {
			if(a[i]=='Y') co++;
			else if(a[i]=='N') khong++;
			else if(a[i]=='A') vang++;
		}
		if(vang>=strlen(a)/2+strlen(a)%2) printf("need quorum\n");
		else {
			if(co>khong) printf("yes\n");
			else if(khong>co) printf("no\n");
			else printf("tie\n");
		}
	}

}