#include <iostream>
#include <cmath>
using namespace std;

int nt[10000005];
int uoc[10000005];

void sang() {
	nt[1]=1;
	int can=1e7/2;
	for(int i=2; i<=can; i++) {
		if(nt[i]==0) {
			for(int j=2*i; j<=1e7; j+=i) {
				nt[j]=1;
				uoc[j]++;
			}
		}
	}
	for(int i=2; i<=1e7; i++) {
		if(!nt[i]) ++uoc[i];
	}
}

int main() {
	sang();
	int t;
	cin>>t;
	for(int i=1; i<=t; i++) {
		cout<<"Case "<<"#"<<i<<": ";
		int a,b,k;
		cin>>a>>b>>k;
		int res=0;
		for(int i=a; i<=b; i++) {
			if(uoc[i]==k) res++;
		}
		cout<<res<<'\n';
	}
}