#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
		int sum=s1+s2+du;
		du=sum/10;
		sum%=10;
		res[k++]=sum;
		i--; j--;
	}
	if(du) res[k++]=du;
	while(res[k]==0) k--;
	if(k<0) printf("0");
	else for(int i=k;i>=0;i--) printf("%d",res[i]);	
}
 

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		char m[1005], n[1005];
		scanf("%s%s",m,n);
		tong(m,n);
		cout<<'\n';
	}
}