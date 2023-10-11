#include <stdio.h>
#include <string.h>

int main () {
	char a[100], b[100];
	int vitri1=0, vitri2=0;
	scanf("%s",a);
	getchar();
	scanf("%s",b);
	int dai1=strlen(a), dai2=strlen(b);
	int check=0;
	for(int i=0; i<dai1; i++) {
		if(check) break;
		for(int j=0; j<dai2; j++) {
			if(a[i]==b[j]) {
				vitri1=i;
				vitri2=j;
				check=1;
				break;
			}
		}
	}
	for(int i=0; i<dai2; i++) {
		if(i==vitri2) {
			printf("%s\n",a);
		} else {
			for(int j=0; j<dai1; j++) {
				if(j==vitri1) printf("%c",b[i]);
				else printf(".");
			}
			printf("\n");
		}
	}

}