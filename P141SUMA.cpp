#include <bits/stdc++.h>
#define ll long long
using namespace std;

// su dung cong thuc ccw ( tim hieu them )
struct td {
	ll x,y;
};

int ccw(td a, td b, td c) {
	ll a1 = b.x-a.x;
	ll a2 = b.y-a.y;
	ll a3 = c.x-b.x;
	ll a4 = c.y-b.y;
	ll tmp = a1*a4-a2*a3;
	if(tmp==0) return 0;
	else if(tmp>0) return 1;
	return -1;
}

int main() {
	td a[3];
	for(td &v : a) {
		cin>>v.x>>v.y;
	}
	int tmp = ccw(a[0], a[1], a[2]);
	if(tmp==0) cout<<"TOWARDS";
	else if(tmp==1) cout<<"LEFT";
	else cout<<"RIGHT";
}