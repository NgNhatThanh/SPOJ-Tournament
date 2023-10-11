#include <stdio.h>
#include <math.h>
 
void process(){
  int m, n;
  scanf("%d%d", &m, &n);
  int lon = fmax(m, n);
  int nho = fmin(m, n);
  printf("%d %d", nho, (lon-nho)/2);
}
 
int main(){
  process();  
}  