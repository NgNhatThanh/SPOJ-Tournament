#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float dai,rong,cao;
	float tmp=a/b;
	cao=sqrt(c/tmp);
	rong = c/cao;
	dai=a/rong;
	int sum=4*((int)dai + (int)rong +(int)cao);
	printf("%d",sum);
}