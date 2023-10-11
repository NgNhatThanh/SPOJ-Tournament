#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int gt[n+5], nang[n+5];
	for(int i=1; i<=n; i++) {
		cin>>nang[i]>>gt[i];
	}
	int res[105][105]= {};
	int kq=0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			res[i][j]=res[i-1][j];
			if(j>=nang[i] && (res[i-1][j-nang[i]]+gt[i]>res[i-1][j])) res[i][j]=res[i-1][j-nang[i]]+gt[i];
			kq=max(kq, res[i][j]);
		}
	}
	cout<<kq;
}