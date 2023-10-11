#include <iostream>
#define ll long long
using namespace std;

ll sum[105][105];
int arr[105][105];
int dx[]= {1,1,2,2};
int dy[]= {-2,2,-1,1};
int n,m;
ll res=0;

bool check(int x,int y) {
	return x>0 && x<=n && y>0 && y<=m;
}

void solve() {
	for(int i=1; i<=m; ++i) sum[1][i]=arr[1][i];
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			for(int k=0; k<4; ++k) {
				int x = i+dx[k];
				int y = j+dy[k];
				if(check(x,y)) {
					sum[x][y] = max(sum[x][y], sum[i][j]+arr[x][y]);
				}
			}
			res=max(res, sum[i][j]);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) cin >> arr[i][j];
	}
	solve();
	cout << res;
}