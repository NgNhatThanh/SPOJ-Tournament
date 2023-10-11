#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int x1,y1,x2,y2,x3,y3,x4,y4;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		int check=1;
		if(x3>x2 || y3>y2 || x4<x1 || y4<y1) check=0;
		// trong bai nay khi hinh be chua trong hinh to van la co diem chung
		cout<<check<<'\n';
	}
}