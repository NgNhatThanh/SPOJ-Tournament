#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int mod = 1e9+7;
ll fibo[1005];
 
void sang(){
	fibo[1]=fibo[2]=1;
	for(int i=3;i<=1000;i++){
		fibo[i]=(fibo[i-1]%mod + fibo[i-2]%mod)%mod;
	}
}
 
int main() {
	sang();
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		cout<<fibo[n]<<'\n';
	}
} 