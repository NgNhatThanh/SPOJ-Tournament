#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int res=0;
	for(int i=0; i<=n/a; i++) {
		int cnt=i;
		for(int j=0; j<=(n-a*i)/b; j++) {
			if((n-a*i-b*j)%c==0) res=max(cnt+j+(n-a*i-b*j)/c, res);
		}
	}
	cout<<res;
}