#include <stdio.h>
#include <string.h>
#define ll long long

void rev(char a[], int l, int r) {
	while(l<r) {
		char tmp = a[l];
		a[l]=a[r];
		a[r]=tmp;
		l++;
		r--;
	}
}

int main() {
	char a[1005], b[1005];
	scanf("%s%s",a,b);
	if(strlen(a)>strlen(b)) printf("No");
	else if(strlen(a)==strlen(b) && strcmp(a,b)==0) printf("No");
	else {
		int l=0, r=strlen(b)-1;
		while(r-l+1>strlen(a)) {
			if(b[l]=='B') {
				rev(b, l+1, r);
			}
			l++;
		}
		char res[r-l+1];
		int k=0;
		for(int i=l; i<=r; i++) {
			res[k++]=b[i];
		}
		res[k]='\0';
		if(strcmp(a,res)==0) printf("Yes");
		else printf("No");
	}
}