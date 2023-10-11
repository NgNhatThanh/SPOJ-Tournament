#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct td {
	int x,y;
};

int check(td a[]) {
	for(int i=0; i<4; i++) {
		for(int j=i+1; j<4; j++) {
			if(a[i].x==a[j].x && a[i].y==a[j].y) return 0;
		}
	}
	return 1;
}

int cmp(td a,td  b) {
	if(a.x==b.x) return a.y>b.y;
	return a.x<b.x;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		td a[4];
		for(td &v : a) {
			cin>>v.x>>v.y;
		}
		if(!check(a)) cout<<"NO\n";
		else {
			sort(a, a+4, cmp);
			if(a[0].x==a[1].x && a[2].x==a[3].x && a[0].y==a[2].y && a[1].y==a[3].y) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}