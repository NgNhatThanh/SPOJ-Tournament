#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9+7;
ll fibo[1005];

void sang(){
	fibo[1]=fibo[2]=1;
	for(int i=3;i<=92;i++){
		fibo[i]=fibo[i-1] + fibo[i-2];
	}
}

int check(ll n){
	for(int i=0;i<=92;i++){
		if(n==fibo[i]) return 1;
	}
	return 0;
}

int main() {
	sang();
	int a;
	cin>>a;
	while(a--){
		ll n;
		cin>>n;
		if(check(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}