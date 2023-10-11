#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int r1,r2, r3,r4;
	cin>>r1>>r2>>r3>>r4;
	int xe, tuong, vua;
	if(r1==r3 || r2==r4) xe=1;
	else xe=2;
	int t1 = r1-r2+8, t2 = r3-r4+8;
	int t3=r1+r2-1, t4=r3+r4-1;
	if(t1==t2 || t3==t4) tuong=1;
	else if((t1+t2)%2) tuong=0;
	else tuong=2;
  	vua=max(abs(r1-r3), abs(r2-r4));
	cout<<xe<<' '<<tuong<<' '<<vua;
}
 