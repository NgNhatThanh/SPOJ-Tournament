#include <stdio.h>
#include <math.h>

void process() {
	int n;
	scanf("%d",&n);
	int res=n;
	while(res/10!=0) {
		int sum=0;
		while(res) {
			sum+=res%10;
			res/=10;
		}
		res=sum;
	}
	printf("%d\n",res);
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}
}