#include <stdio.h>
#include <string.h>
#include <math.h>
 
int check[1000];
int k=0;
void seive(){
  for(int i=4; i<=777; i++){
    int tmp=i;
    int ck=1;
    while(tmp){
      if(tmp%10!=7 && tmp%10!=4){
        ck=0;
        break;
      }
      tmp/=10;
    }
    if(ck) check[k++]=i;
  }
}
 
void process(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<k; i++){
    if(n%check[i]==0){
      printf("YES\n");
      return;
    }
  }
  printf("NO");
}
 
int main(){
  seive();
  process();
}  