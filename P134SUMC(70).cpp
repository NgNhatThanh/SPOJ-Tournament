#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
#define maxn 20005

vector<int> ke[maxn];
int vst[maxn];

void dfs(int u){
	vst[u] = 1;
	for(int x : ke[u]){
		if(!vst[x]) dfs(x);
	} 
}

int main() {
	faster()
	int n, m;
	cin >> n >> m;
	int x, y, tplt = 0;
	while(m--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
	}
	for(int i=1; i<=n; ++i){
		if(!vst[i]){
			++tplt;
			dfs(i);
		}
	}
	memset(vst, 0, sizeof vst);
	for(int i=1; i<=n; ++i){
		int cnt = 0;
		vst[i] = 1;
		for(int x : ke[i]){
			if(!vst[x]){
				++cnt;
				dfs(x);
			}
		}
		cout << tplt + cnt - 1 << '\n';
		memset(vst, 0, sizeof vst);
	}
}