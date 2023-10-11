#include <stdio.h>
#include <string.h>
#include <ctype.h>

char nguyenam[]= {'A', 'E', 'I', 'O', 'U', 'a', 'e','i', 'o', 'u','Y','y'};

int check(char a) {
	for(int i=0; i<12; i++) {
		if(a==nguyenam[i]) return 0;
	}
	return 1;
}

void process() {
	char a[1000];
	gets(a);
	for(int i=0; i<strlen(a); i++) {
		if(check(a[i])) printf(".%c",tolower(a[i]));
	}
}


int main() {
	process();
}