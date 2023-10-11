#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int c,v0, v1, a,l;
	cin>>c>>v0>>v1>>a>>l;
	int res=0;
	int page=0;
	int day=0;
	while(page<c) {
		day++;
		if(day>1) {
			v0+=a;
			page-=l;
			if(v0>v1) v0=v1;
		}
		page+=v0;
	}
	cout<<day;
}