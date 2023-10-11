#include <stdio.h>
#include <math.h>
 
int nt[10000000];
 
void seive(){
  nt[1]=1;
  for(int i=2; i<=sqrt(1000000); i++){
    for(int j=i*i; j<=1000000; j+=i) nt[j]=1;
  }
}
 
void process(){
  int l,r;
  int res=0;
  scanf("%d%d", &l, &r);
  for(int i=l; i<=r-6; i++){
    if(nt[i]==0 && nt[i+6]==0 && i+6<=r) res++;
  }
  printf("%d\n", res);
}
 
 
int main(){
  seive();
  int a;
  scanf("%d", &a);
  while(a--){
    process();
  }
}  