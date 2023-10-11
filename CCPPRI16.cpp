#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nt[1050000];

vector<ll> luu;

void sang() {
	nt[1]=1;
	int can = sqrt(1050000);
	for(int i=2; i<=can; i++) {
		if(nt[i]==0) {
			for(int j=i*i; j<=1050000; j+=i) nt[j]=1;
		}
	}
	for(int i=2;i<=1050000;i++){
		if(nt[i]==0){
			ll tmp=1ll*i*i;
			luu.push_back(tmp);
		}
	}
}

int main() {
	sang();
	int a;
	cin>>a;
	while(a--) {
		ll n;
		cin>>n;
		int cnt=0;
		for(int i=0;i<luu.size();i++){
			if(luu[i]>n) break;
			else cnt++;
		}
		cout<<cnt<<'\n';
	}
}