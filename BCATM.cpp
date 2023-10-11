#include <stdio.h>
#include <stdlib.h>
 
int cmp(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  int a, b, cnt=0;
  scanf("%d%d", &a, &b);
  int arr[a];
  for(int i=0; i<a; i++) scanf("%d", &arr[i]);
  qsort(arr, a, 4, cmp);
  int k=a-1;
  for(int i=a-1; i>=0; i--){
    if(arr[i]<=b){
      cnt += b/arr[i];
      b = b%arr[i];
    }
  }
  if(b==0) printf("%d", cnt);
  else printf("-1");  
}  