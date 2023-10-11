#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n,l;
	cin>>n>>l;
	vector<int> arr[n];
	int a,b,c;
	for(int i=0; i<n; i++) {
		cin>>a>>b>>c;
		arr[i].push_back(a);
		arr[i].push_back(b);
		arr[i].push_back(c);
	}
	int kc=arr[0][0];
	int tg=kc;
	for(int i=0; i<n; i++) {
		int tt=tg%(arr[i][1]+arr[i][2]);
		if(tt<arr[i][1]) {
			tg+=(arr[i][1]-tt);
		}
		if(i<n-1) {
			int tmp= kc;
			kc=arr[i+1][0];
			tg+=kc-tmp;
		}
	}
	tg+=l-kc;
	cout<<tg;
}