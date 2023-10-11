#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,m,u,v;
vector<int> arr[105];
int check[105];
bool visited[105];
int cnt=0;

void dfs(int n, int des){
	if(n==des) {
		cnt++;
		return;
	}
	for(int x : arr[n]){
		if(!visited[x]) dfs(x, des);
		visited[x]=true;
		check[x]++;
	}
}

int main() {
	int a;
	cin>>a;
	while(a--){
		memset(visited, false, sizeof(visited));
		memset(check, 0, sizeof(check));
		cin>>n>>m>>u>>v;
		for(int i=1;i<=n;i++) arr[i].clear();
		while(m--){
			int x, y;
			cin>>x>>y;
			arr[x].push_back(y);
		}
		dfs(u, v);
		cout<<check[5];
		//cout<<cnt;
	}
}
