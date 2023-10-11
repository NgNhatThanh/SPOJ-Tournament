#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9+7;

int main() {
	int a,b;
	cin>>a>>b;
	int c=b-a;
	ll n;
	cin>>n;
	int res;
	if(n%6==0) res=c*-1;
	else if(n%6==1) res=a;
	else if(n%6==2) res=b;
	else if(n%6==3) res=c;
	else if(n%6==4) res=a*-1;
	else res=b*-1;
	if(res<0) cout<<res+mod;
	else cout<<res%mod;
}