#include <bits/stdc++.h>
#define ll long long
using namespace std;

char res[1500][1500];

int main() {
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	int h=750;
	int minh=3000, maxh=750;
	int add=-1;
	int c=0;
	char t='/';
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		sum+=arr[i];
		if(i%2==0) {
			add=-1;
			t='/';
		} else {
			add=1;
			t='\\';
		}
		while(arr[i]--) {
			res[h][c++]=t;
			if(arr[i]>=1) h+=add;
		}
		minh=min(minh, h);
		maxh=max(maxh, h);
	}
	for(int i=minh; i<=maxh; i++) {
		for(int j=0; j<sum; j++) {
			if(res[i][j]=='\\' || res[i][j]=='/') cout<<res[i][j];
			else cout<<' ';
		}
		cout<<'\n';
	}
}