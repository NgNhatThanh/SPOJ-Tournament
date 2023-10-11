#include <stdio.h>
#include <string.h>
char ln[50];
int min=10000;
int giai=0;
 
void process(){
	char ten[100];
	scanf("%s", ten);
	int arr[8];
	int pel=0;
	int cnt=0;
	for(int i=0; i<8; i++){
		scanf("%d", &arr[i]);
		if(i%2==1){
			if(arr[i]!=0){
				pel+=(arr[i]+20*(arr[i-1]-1));
				cnt++;
			}
		}
	}
	if(cnt>=giai){
		if(pel<min){
			min=pel;
			strcpy(ln,ten);
			giai=cnt;
		}
	}
}

int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		process();
	}
	printf("%s %d %d", ln, giai, min);
	
}  