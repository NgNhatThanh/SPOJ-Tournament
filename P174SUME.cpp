#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	if(k>n ||(k==1 && n>1)) cout<<-1;
	else {
		string res="";
		string p="ab";
		if(k>2) {
			for(int i=0; i<n-(k-2); i++) {
				res+=p[i%2];
			}
			k-=2;
			char add='c';
			while(k--) res+=add++;
		} else {
			if(k==1) {
				cout<<'a';
			} else {
				for(int i=0; i<n; i++) {
					res+=p[i%2];
				}
			}
		}
		cout<<res;
	}
}