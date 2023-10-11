#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9+7;


long long lt(long long a, long long b){
	long long res=1;
	if(b==0) return 1;
	res=lt(a,b/2);
	res = ((res%mod)*(res%mod))%mod;
	if(b%2) ((res%=mod)*=a)%=mod;
	return res;
}

int main() {
	long long a,b;
	while(cin>>a>>b){
		if(a==0 && b==0) return 0;
		cout<<lt(a,b)<<'\n';
	}
}