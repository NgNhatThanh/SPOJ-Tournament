#include <stdio.h>
#include <string.h>
 
int timmin(int arr[],int st, int end,int n){
  int kc=1000000, min=10000000;
  for(int i=st; i<end; i++){
    if(arr[i]>n && kc>arr[i]-n){
      kc=arr[i]-n;
      min=arr[i];
    }
  }
  return min;
}
 
void sapxep(int arr[],int st, int end){
  for(int i=st; i<end; i++){
    for(int j=i; j<end; j++){
      if(arr[i]>arr[j]){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
      }
    }
  }
}
 
void process(){
  int stt;
  scanf("%d", &stt);
  getchar();
  printf("%d ", stt);
  char n[100];
  gets(n);
  int dai=strlen(n);
  int arr[dai];
  for(int i=0; i<dai; i++) arr[i]=(int)n[i]-48;
  for(int i=dai-2; i>=0; i--){
    if(arr[i]<arr[i+1]){
      int tmp=timmin(arr,i+1,dai,arr[i]);
      for(int j=i+1; j<dai; j++){
        if(arr[j]==tmp) {
            arr[j]=arr[i];
            break;
        }
        
      }
      arr[i]=tmp;
      sapxep(arr,i+1,dai);
      break;
    }
    if(i==0){
    	printf("BIGGEST\n");
    	return;
	}
    
  }
  for(int i=0; i<dai; i++) printf("%d",arr[i]);
  printf("\n");
}
 
int main(){
  int a;
  scanf("%d", &a);
  getchar();
  while(a--){
    process();
  }
}  