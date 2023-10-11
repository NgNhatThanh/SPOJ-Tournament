#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[300];
bool visited[300];
int n, k;

void dfs(int n) {
	visited[n]=true;
	for(int x : ke[n]) {
		if(!visited[x]) dfs(x);
	}
}

int main() {
	cin>>n>>k;
	int x,y;
	while(k--) {
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	dfs(1);
	int cnt=0;
	for(int i=1; i<=n; i++) {
		if(!visited[i]) {
			cout<<i<<'\n';
			cnt++;
		}
	}
	if(!cnt) cout<<0;
}