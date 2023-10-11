#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

int nt[9593]= {};

int k=0;

int check(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

void sang() {
	for(int i=2; i<=100000; i++) {
		if(check(i)) nt[k++]=i;
	}
}

int main() {
	sang();
	faster
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		int res=0;
		for(int i=0; i<k; i++) {
			int sum=0;
			for(int j=i; j<k; j++) {
				sum+=nt[j];
				if(sum==n) {
					res++;
					break;
				} else if(sum>n) {
					break;
				}
			}
		}
		cout<<res<<'\n';
	}
}