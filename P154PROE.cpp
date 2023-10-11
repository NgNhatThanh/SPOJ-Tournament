#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<int> ke[100];
bool visited[100];
int cnt=0;

// tim cac nhom phan ung voi nhau, res*=pow(2, so luong phan tu cua nhom - 1)
void dfs(int u) {
	cnt++;
	visited[u]=true;
	for(int x : ke[u]) {
		if(!visited[x]) dfs(x);
	}
}

int main() {
	int n,m;
	cin>>n>>m;
	ll res=1;
	int x,y;
	for(int i=0; i<m; i++) {
		cin>>x>>y;
		ke[x].insert(y);
		ke[y].insert(x);
	}
	for(int i=1; i<=n; i++) {
		if(!visited[i]) {
			if(cnt) res*=pow(2,cnt-1);
			cnt=0;
			dfs(i);
		}
	}
	if(cnt) res*=pow(2,cnt-1);
	cout<<res;
}