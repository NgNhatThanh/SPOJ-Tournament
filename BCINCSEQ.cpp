#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int arr[n];
  int res=1;
  int cnt=1;
  scanf("%d", &arr[0]);
  for(int i=1; i<n; i++){
    scanf("%d", &arr[i]);
    if(arr[i]>=arr[i-1]) cnt++;
    else{
      if(cnt>res) res=cnt;
      cnt=1;
    }
  }
  if(cnt>res) res=cnt;
  printf("%d", res);
}  