#include <stdio.h>

int main() {
	float x1,y1,x2,y2,x3,y3;
	scanf("%f%f",&x1,&y1);
	float x4 =x1,y4=y1;
	scanf("%f%f%f%f",&x2,&y2,&x3,&y3);
	if(x4==x2) x4=x3;
	else if(x4==x3) x4=x2;
	if(y4==y2) y4=y3;
	else if(y4==y3) y4=y2;
	printf("%g %g",x4,y4);

}