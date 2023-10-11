#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int check[105]= {};
	int x,y;
	for(int i=0; i<3; i++) {
		cin>>x>>y;
		for(int i=x; i<y; i++) check[i]++;
	}
	int res=0;
	for(int i=1; i<=100; i++) {
		if(check[i]==1) res+=a;
		else if(check[i]==2) res+=2*b;
		else if(check[i]==3) res+=3*c;
	}
	cout<<res;
}