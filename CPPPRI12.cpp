#include <stdio.h>
#include <math.h>
 
void ptngto(int n, int k){
  int sqr=sqrt(n);
  int cnt=0;
  for(int i=2; i<=sqr; i++){
    while(n%i==0){
      cnt++;
      if(cnt==k){
      	printf("%d", i);
      	return;
	  }
      n/=i;
    }
  }
  if(n!=1) {
  	cnt++;
  	if(cnt==k){
  		printf("%d", n);
  		return;
	  }
  }
  printf("-1");
}
 
int main(){
  int a;
  int n, k;
  scanf("%d", &a);
  while(a--){
    scanf("%d%d", &n, &k);
    ptngto(n, k);
    printf("\n");
  }
}