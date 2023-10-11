#include <bits/stdc++.h>
using namespace std;

int n,s;
int res=1e9;
int arr[40];

void Try(int i, int sum=0, int cnt=0) {
	if(sum==s) {
		if(cnt<res) res=cnt;
		return;
	}
	if(i>=n || sum>s || cnt>res) return;
	for(int j=i; j<n; j++) {
		Try(j+1, sum+arr[j], cnt+1);
	}
}

int main() {
	cin>>n>>s;
	for(int &x : arr) cin>>x;
	for(int i=0; i<n; i++) Try(i);
	cout<<res;
}