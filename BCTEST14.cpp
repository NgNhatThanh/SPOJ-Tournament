#include <stdio.h>
#include <math.h>
 
int main(){
	int a,b,v;
	scanf("%d%d%d", &a, &b, &v);
	int len = ceil(1.0*(v-a)/(a-b));
	printf("%d", len+1);
}  