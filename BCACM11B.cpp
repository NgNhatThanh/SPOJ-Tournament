#include <stdio.h>
 
void process(){
  int n,x,y;
  scanf("%d%d%d", &n, &x, &y);
  int hang=1, cot=1;
  int res=1;
  int mh=n, mc=n;
  int tren=2, duoi=1;
  int check=1;
  while(1){
    if(check==1){
      while(cot<=mc){
        if(hang==x && cot==y){
          printf("%d\n", res);
          return;
        }
        cot++;
        res++;
      }
      cot--;
      res--;
      mc--;
      while(hang <= mh){
        if(hang==x && cot==y){
          printf("%d\n", res);
          return;
        }
        hang++;
        res++;
        }
        hang--;
        res--;
        mh--;
    }
    else{
      while(cot >= duoi){
        if(hang==x && cot==y){
          printf("%d\n", res);
          return;
        }
        cot--;
        res++;
      }
      cot++;
      res--;
      duoi++;
      while(hang >= tren){
        if(hang==x && cot==y){
          printf("%d\n", res);
          return;
        }
        hang--;
        res++;
        }
        hang++;
        res--;
        tren++;
    }
    if(check==1) check=0;
    else check=1;
  }
}
 
int main(){
  int a;
  scanf("%d", &a);
  while(a--){
    process();
  }
}  