#include <iostream>
#include <queue>
#define ll long long
using namespace std;

char arr[105][105];
int r, c;
int rb, cb;
int kq=1e9;
int di[]= {0,0,1,-1};
int dj[]= {1,-1,0,0};
int res[105][105];
bool visited[105][105];


bool check(int a, int b) {
	return a>0 && a<=r && b>0 && b<=c && !visited[a][b] && arr[a][b]!='*';
}

void solve() {
	queue<pair<int, int>> q;
	q.push({rb,cb});
	res[rb][cb]=1;
	visited[rb][cb]=true;
	while(q.front().first!=1 || q.front().second!=1) {
		int t1=q.front().first;
		int t2=q.front().second;
		for(int i=0; i<4; i++) {
			int a=t1+di[i];
			int b=t2+dj[i];
			if(check(a,b)) {
				visited[a][b]=true;
				q.push({a,b});
				res[a][b]=res[t1][t2]+1;
			}
		}
		q.pop();
	}
	kq=res[1][1]-1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>r>>c;
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			cin>>arr[i][j];
			if(arr[i][j]=='C') {
				rb=i;
				cb=j;
			}
		}
	}
	solve();
	cout<<kq;
}