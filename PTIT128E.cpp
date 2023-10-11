#include <bits/stdc++.h>
#define ll long long
using namespace std;

// search ve hinh anh cua khoa quay ket sat se de hinh dung va de hieu hon
int main() {
	int n,t1,t2,t3;
	while(cin>>n>>t1>>t2>>t3) {
		if(!n) return 0;
		int tick=2*n+n-1;// vi tri ban dau la vi tri t1+1 de quay qua nhieu tick nhat
		tick+=n;
		if(t2>t1) {
			tick+=(t2-t1);
		} else tick+=(n-(t1-t2));
		if(t3>t2) {
			tick+=(n-(t3-t2));
		} else tick+=(t2-t3);
		cout<<tick<<'\n';
	}
}