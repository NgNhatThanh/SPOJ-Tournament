#include <stdio.h>
#include <math.h>
 
void process(int n){
	int sqr=sqrt(n);
	for(int i=2; i<=sqr; i++){
		int mu=0;
		while(n%i==0){
			mu++;
			n/=i;
		}
		if(mu) printf("%d %d ", i, mu);
	}
	if(n!=1) printf("%d 1", n);
}
 
int main(){
  int a;
  int n;
  scanf("%d", &a);
  while(a--){
    scanf("%d", &n);
    process(n);
    printf("\n");
  }
}   