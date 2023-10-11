#include <bits/stdc++.h>

using namespace std;

int nhan[]={0,1,19,271,3439,40951,468559,5217031,56953279,612579511};
// lan luot la so so 4 co trong khoang tu 1 - 10^i;
// nhan[i] = nhan[i-1]*10 + 10^(i-1) - nhan[i-1]

int main(){
	int n;
	while(cin>>n){
		if(n==0) return 0;
		int m=n;
		int res=0;
		int k=1;
		if(n%10>4) res=1;
		n/=10;
		while(n){
			int tmp = n%10;
			int mu = pow(10,k);
			res+=tmp*nhan[k];
			if(tmp>4) res+=mu-nhan[k]; 
			k++;
			n/=10; 
		}
		cout<<m<<": "<<m-res<<'\n';
	}	
}