#include <iostream>

using namespace std;

int n,m;
char arr[105][105];
bool visited[105][105];

void dfs(int i, int j) {
	visited[i][j]=true;
	if(arr[i-1][j]=='#' && !visited[i-1][j]) dfs(i-1,j);
	if(arr[i+1][j]=='#' && !visited[i+1][j]) dfs(i+1,j);
	if(arr[i][j-1]=='#' && !visited[i][j-1]) dfs(i,j-1);
	if(arr[i][j+1]=='#' && !visited[i][j+1]) dfs(i,j+1);
}

int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) cin>>arr[i][j];
	}
	int res=0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(arr[i][j]=='#' && !visited[i][j]) {
				res++;
				dfs(i,j);
			}
		}
	}
	cout<<res;
}