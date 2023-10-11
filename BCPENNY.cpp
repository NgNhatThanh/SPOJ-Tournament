#include <stdio.h>
#include <string.h>

int cmp(char a[], char b[], int n) {
	int k=0;
	for(int i=n; i<n+3; i++) {
		if(a[i]!=b[k++]) return 0;
	}
	return 1;
}

void process() {
	int stt;
	int check[8]= {};
	scanf("%d",&stt);
	getchar();
	printf("%d ",stt);
	char n[41];
	gets(n);
	for(int i=0; i<38; i++) {
		if(cmp(n,"TTT",i)) check[0]++;
		else if(cmp(n,"TTH",i)) check[1]++;
		else if(cmp(n,"THT",i)) check[2]++;
		else if(cmp(n,"THH",i)) check[3]++;
		else if(cmp(n,"HTT",i)) check[4]++;
		else if(cmp(n,"HTH",i)) check[5]++;
		else if(cmp(n,"HHT",i)) check[6]++;
		else check[7]++;
	}
	for(int i=0; i<8; i++) printf("%d ",check[i]);
	printf("\n");
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		process();
	}



}