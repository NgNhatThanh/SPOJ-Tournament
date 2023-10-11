#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int res=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int tmp  = i*i+j*j;
			int t =sqrt(tmp);
			if(t*t==tmp && t<=n){
				res++;
			}
		}
	}
	cout<<res;
} 