#include <iostream>
#include <queue>
#include <cstring>
#define ll long long
using namespace std;

int visited[1005][1005];
int cnt[1005][1005];
int dx[]= {-1,-1,-2,-2,1,1,2,2};
int dy[]= {-2,2,-1,1,-2,2,-1,1};
int n,m;
int stx, sty;
int ktx, kty;

bool check(int x,int y) {
	return x>0 && x<=n && y>0 && y<=m && !visited[x][y];
}

void solve() {
	queue<pair<int, int>> q;
	q.push({stx, sty});
	while(q.size() && q.front().first!=ktx || q.front().second!=kty) {
		int a=q.front().first;
		int b=q.front().second;
		visited[a][b]=true;
		for(int i=0; i<8; i++) {
			int t1=a+dx[i];
			int t2=b+dy[i];
			if(check(t1,t2)) {
				visited[t1][t2]=true;
				q.push({t1,t2});
				cnt[t1][t2]=cnt[a][b]+1;
			}
		}
		q.pop();
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	cin>>stx>>sty;
	cin>>ktx>>kty;
	if(stx==ktx && sty==kty) cout<<0;
	else {
		solve();
		if(!cnt[ktx][kty]) cout<<-1;
		else cout<<cnt[ktx][kty];
	}
}