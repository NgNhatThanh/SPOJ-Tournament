#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

set<int> ke[1005];
bool visited[1005];

void dfs(int u) {
	visited[u]=true;
	cout<<u<<' ';
	for(int x : ke[u]) {
		if(!visited[x]) dfs(x);
	}
}

int main() {
	faster()
	int a;
	cin>>a;
	while(a--) {
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=1000; i++) ke[i].clear();
		int n,m,u;
		cin>>n>>m>>u;
		int x,y;
		while(m--) {
			cin>>x>>y;
			ke[x].insert(y);
			ke[y].insert(x);
		}
		dfs(u);
		cout<<'\n';
	}
}