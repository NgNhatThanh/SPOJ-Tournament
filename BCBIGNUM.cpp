#include <stdio.h>
#include <string.h>
 
void tong(char a[], char b[]){
	int res[1005]={};
	int l1=strlen(a);
	int l2=strlen(b);
	int du=0;
	int k=0;
	int i=l1-1, j=l2-1;
	while(i>=0 || j>=0){
		int s1=(i>=0) ? a[i]-48 : 0;
		int s2=(j>=0) ? b[j]-48 : 0;
		int sum = s1+s2+du;
		du = sum/10;
		sum %= 10;
		res[k++]=sum;
		i--; j--;
	}
	if(du) res[k++]=du;
	while(res[k]==0) k--;
	if(k<0) printf("0");
	else for(int i=k; i>=0; i--) printf("%d", res[i]);	
}
 
void hieu(char a[], char b[]){
	int res[1005]={};
	int du=0;
	int k=0;
	int kt=0;
	if(strlen(a)<strlen(b) || (strlen(a)==strlen(b) && strcmp(a,b)<0)){
		kt=1;
		char tmp[1005];
		strcpy(tmp, a);
		strcpy(a, b);
		strcpy(b, tmp);
	}
	int i=strlen(a)-1;
	int j=strlen(b)-1;
	while(i>=0 || j>=0){
		int s1= (i>=0) ? a[i]-48 : 0;
		int s2= (j>=0) ? b[j]-48 : 0;
		int hieu = s1-s2-du;
		if(hieu<0){
			hieu += 10;
			du=1;
		}
		else du=0;
		res[k++]=hieu;
		i--; j--;
	}
	if(kt) printf("-");
	while(res[k]==0) k--;
	if(k<0) printf("0");
	else for(int i=k; i>=0; i--) printf("%d", res[i]);
}
 
int resnhan[1000006]={};
 
void nhan(char a[], char b[]){
	int l1=strlen(a);
	int l2=strlen(b);
	for(int i=l1-1; i>=0; i--){
		int tmp=l1-i-1;
		for(int j=l2-1; j>=0; j--){
			int tmp2=l2-j-1;
			int s1=a[i]-48;
			int s2=b[j]-48;
			int dif=s1*s2;
			resnhan[tmp+tmp2] += dif;
			if(resnhan[tmp+tmp2] >= 10){
				resnhan[tmp+tmp2+1] += resnhan[tmp+tmp2]/10;
				resnhan[tmp+tmp2] %= 10;
			}	
		}
	}
	int k=l1+l2+1;
	while(resnhan[k]==0) k--;
	if(k<0) printf("0");
	else for(int i=k; i>=0; i--) printf("%d", resnhan[i]);
}
 
int main(){
	char a[1005], b[1005], res[1005];
	scanf("%s%s", a, b);
	tong(a, b);
	printf("\n");
	hieu(a, b);
	printf("\n");
	nhan(a, b);
}  