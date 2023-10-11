#include <bits/stdc++.h>
#define ll long long
using namespace std;

int resnhan[1000006]={};
 
void nhan(char a[], char b[]){
	int l1=strlen(a);
	int l2=strlen(b);
	for(int i=l1-1;i>=0;i--){
		int tmp=l1-i-1;
		for(int j=l2-1;j>=0;j--){
			int tmp2=l2-j-1;
			int s1=a[i]-48;
			int s2=b[j]-48;
			int dif=s1*s2;
			resnhan[tmp+tmp2]+=dif;
			if(resnhan[tmp+tmp2]>=10){
				resnhan[tmp+tmp2+1]+=resnhan[tmp+tmp2]/10;
				resnhan[tmp+tmp2]%=10;
			}	
		}
	}
	int k=l1+l2+1;
	while(resnhan[k]==0) k--;
	if(k<0) printf("0");
	else for(int i=k;i>=0;i--) printf("%d",resnhan[i]);
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		memset(resnhan, 0, sizeof(resnhan));
		char m[1005], n[1005];
		scanf("%s%s",m,n);
		nhan(m,n);
		cout<<'\n';
	}
}