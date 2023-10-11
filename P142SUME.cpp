#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, s;
int arr[25];
int ok=1;
int res=0;

void ktao() {
	for(int i=1; i<=k; i++) {
		arr[i]=i;
	}
}

void sinh() {
	int sum = 0 ;
	for(int j=1; j<=k; j++) sum+=arr[j];
	if(sum==s) {
		res++;
	}
	int i=k;
	while(i>=1 && arr[i]==n-k+i) i--;
	if(i==0) ok=0;
	else {
		arr[i]++;
		for(int j=i+1; j<=k; j++) arr[j]=arr[j-1]+1;
	}
}

int main() {
	while(cin>>n>>k>>s) {
		if(!n) return 0;
		ok=1;

		if(k>n) cout<<"0\n";
		else {
			res=0;
			ktao();
			while(ok) {
				sinh();
			}
			cout<<res<<'\n';
		}
	}
}