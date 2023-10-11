#include <stdio.h>
#include <math.h>
 
int nt[1000001];
 
void sang(){
  nt[1]=1;
  int sqr=sqrt(1000000);
  for(int i=2; i<=sqr; i++){
    for(int j=i*i; j<=1000000; j+=i) nt[j]=1;
  }
}
 
int tong(int n){
  int tong=0;
  while(n){
    tong += n%10;
    n /= 10;
  }
  return tong;
}
 
int tsnt(int n){
  int sum=0;
  int sqr=sqrt(n);
  for(int i=2; i<=sqr; i++){
    while(n%i==0){
      sum += tong(i);
      n /= i;
    }
  }
  if(n!=1) sum += tong(n);
  return sum;
}
 
int main(){
  sang();
  int a, n;
  scanf("%d", &a);
  while(a--){
    scanf("%d", &n);
    if(nt[n]==1){
      if(tong(n)==tsnt(n)) printf("YES\n");
      else printf("NO\n");
    }
    else printf("NO\n");
  }
} 