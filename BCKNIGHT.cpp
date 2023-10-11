#include <iostream>
#include <cmath>
#define fast() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n,x,y;
int arr[15][15];
int ax[]= {2,1,-1,-2,2,1,-1,-2};// do tang giam toa do khi con ma di chuyen
int ay[]= {1,2,2,1,-1,-2,-2,-1};
int ok=0;

void in() {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) cout<<arr[i][j]<<' ';
		cout<<'\n';
	}
}

void solve(int x, int y, int cnt=2) {
	if(ok) return;
	for(int i=0; i<8; i++) {
		int t1 = x+ax[i];
		int t2 = y+ay[i];
		if(t1>0 && t1<=n && t2>0 && t2<=n && arr[t1][t2]==0) {
			arr[t1][t2]=cnt;
			if(cnt==n*n) {
				in();
				ok=1;
			} else {
				solve(t1,t2,cnt+1);
			}
			arr[t1][t2]=0;
		}
	}
}

int main() {
	cin>>n>>x>>y;
	arr[x][y]=1;
	solve(x,y);
}