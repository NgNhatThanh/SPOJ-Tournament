#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

const int mod=1e9+7;

int main() {
	faster
	int a,b,c;
	cin>>a>>b>>c;
	int x,y,z;
	x=fmin(fmin(a,b),c);
	z=fmax(fmax(a,b),c);
	y=a+b+c-x-z;
	int tmp1=z-y, tmp2=y-x;
	if(tmp1==tmp2) cout<<z+tmp1;
	else if(tmp1>tmp2) cout<<y+tmp2;
	else if(tmp1<tmp2) cout<<x+tmp1;
}