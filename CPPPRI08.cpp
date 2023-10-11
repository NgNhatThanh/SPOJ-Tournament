#include <stdio.h>
#include <math.h>
 
int main(){
  int a, n, p;
  scanf("%d", &a);
  while(a--){
    scanf("%d%d", &n, &p);
    int mu=0;
    for(int i=2; i<=n; i++){
      int k=i;
      while(k%p==0){
        mu++;
        k/=p;
      }
    }
    printf("%d\n", mu);
  }
}  