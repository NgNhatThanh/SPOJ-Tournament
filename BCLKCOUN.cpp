#include <iostream>

using namespace std;

int n,m;
char arr[105][105];
bool visited[105][105];
int di[]= {1,1,1,-1,-1,-1,0,0};
int dj[]= {1,-1,0,0,1,-1,1,-1};

void dfs(int i, int j) {
	visited[i][j]=true;
	for(int k=0; k<8; k++) {
		int t1=i+di[k];
		int t2=j+dj[k];
		if(arr[t1][t2]=='W' && !visited[t1][t2]) dfs(t1,t2);
	}
}

int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) cin>>arr[i][j];
	}
	int res=0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(arr[i][j]=='W' && !visited[i][j]) {
				res++;
				dfs(i,j);
			}
		}
	}
	cout<<res;
}