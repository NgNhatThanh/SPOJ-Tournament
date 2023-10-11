#include <bits/stdc++.h>
#define ll long long
using namespace std;

int vitri[105];
set<int> arr[1005];
bool visited[1005];
int check[1005];

void dfs(int n){
	visited[n]=true;
	check[n]++;
	for(int x : arr[n]){
		if(!visited[x]) dfs(x);
	}
}

int main() {
	int k, n, m;
	cin>>k>>n>>m;
	for(int i=0;i<k;i++) cin>>vitri[i];
	while(m--){
		int x,y;
		cin>>x>>y;
		arr[x].insert(y);
	}
	for(int i=0;i<k;i++){
		memset(visited, false, sizeof(visited));
		dfs(vitri[i]);
	}
	int res=0;
	for(int i=1;i<=n;i++){
		if(check[i]>=k) res++;
	}
	cout<<res;
}
