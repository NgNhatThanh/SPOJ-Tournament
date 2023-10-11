#include <bits/stdc++.h>
#define ll long long
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

set<int> ke[1005];
bool visited[1005];
queue<int> q;

void bfs(int u) {
	visited[u]=true;
	q.push(u);
	while(q.size()) {
		int tmp = q.front();
		q.pop();
		cout<<tmp<<' ';
		for(int x : ke[tmp]) {
			if(!visited[x]) {
				visited[x]=true;
				q.push(x);
			}
		}
	}
}

int main() {
	faster
	int a;
	cin>>a;
	while(a--) {
		memset(visited, false, sizeof(visited));
		q= {};
		for(int i=1; i<=1000; i++) ke[i].clear();
		int n,m,u;
		cin>>n>>m>>u;
		int x,y;
		while(m--) {
			cin>>x>>y;
			ke[x].insert(y);
			ke[y].insert(x);
		}
		bfs(u);
		cout<<'\n';
	}
}