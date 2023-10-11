#include <bits/stdc++.h>
#define ll long long

using namespace std;

// so nghiem pt la so uoc cua n^2
// tham khao: https://stackoverflow.com/questions/9469898/1-x-1-y-1-nfactorial

int main() {
	int n;
	cin>>n;
	map<int, int> mp;	
	int can=sqrt(n);
	for(int i=2; i<=can; i++) {
		if(n%i==0) {
			int cnt=0;
			while(n%i==0) {
				cnt++;
				n/=i;
			}
			mp[i]=cnt;
		}
	}
	int uoc=1;
	for(pair<int, int> x : mp) {
		uoc*=(2*x.second+1);
	}
	if(n>1) uoc*=3;
	cout<<uoc;
}