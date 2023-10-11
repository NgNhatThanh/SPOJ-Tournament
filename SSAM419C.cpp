#include <iostream>
#include <queue>
#include <cstring>
#define ll long long
using namespace std;

int visited[10][10];
int cnt[10][10];
int dx[]= {-1,-1,-2,-2,1,1,2,2};
int dy[]= {-2,2,-1,1,-2,2,-1,1};
int stx, sty;
int ktx, kty;

bool check(int x,int y) {
	return x>0 && x<=8 && y>0 && y<=8 && !visited[x][y];
}

void solve() {
	queue<pair<int, int>> q;
	q.push({stx, sty});
	while(q.front().first!=ktx || q.front().second!=kty) {
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
	int t;
	cin>>t;
	while(t--) {
		memset(visited, false, sizeof(visited));
		memset(cnt, 0, sizeof(cnt));
		string a, b;
		cin>>a>>b;
		stx=a[0]-96;
		sty=a[1]-48;
		ktx=b[0]-96;
		kty=b[1]-48;
		solve();
		cout<<cnt[ktx][kty]<<'\n';
	}
}