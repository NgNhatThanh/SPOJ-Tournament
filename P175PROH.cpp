#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll l1, r1, l2,r2, k;
	cin>>l1>>r1>>l2>>r2>>k;
	if(l2>r1 || l1>r2) cout<<0;
	else {
		ll res;
		if(r2>=r1) {
			if(l2>=l1) {
				res=r1-l2+1;
				if(k>=l2 && k<=r1) res--;
			} 
			else {
				res=r1-l1+1;
				if(k>=l1 && k<=r1) res--;
			}
		} 
		else if(r1>=r2) {
			if(l1>=l2) {
				res=r2-l1+1;
				if(k>=l1 && k<=r2) res--;
			} 
			else {
				res=r2-l2+1;
				if(k>=l2 && k<=r2) res--;
			}
		}
		cout<<res;
	}

}