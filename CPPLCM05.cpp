#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

long long gcd( long long a, long long b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long a, x, y;
		cin>>a>>x>>y;
		int tmp = gcd(x,y);
		while(tmp--) cout<<a;
		cout<<'\n';
	}
}