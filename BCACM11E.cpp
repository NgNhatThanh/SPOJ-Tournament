#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int n;
int arr[105][105];
set<int> ke[105];
bool visited[105];
int res=1;

void dfs(int n, int k) {
	visited[n]=true;
	for(int x :ke[n]) {
		if(x!=k && !visited[x]) dfs(x,k);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		res=1;
		for(int i=1; i<=100; i++) ke[i].clear();
		cin>>n;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				cin>>arr[i][j];
				if(arr[i][j]) {
					ke[i].insert(j);
					ke[j].insert(i);
				}
			}
		}
		int idx=1;
		for(int i=1; i<=n; i++) {
			int cnt=0;
			memset(visited, false, sizeof(visited));
			for(int j=1; j<=n; j++) {
				if(j!=i && !visited[j]) {
					cnt++;
					dfs(j, i);
				}
			}
			if(cnt>res) {
				idx=i;
				res=cnt;
			}
		}
		if(res==1) cout<<0;
		else cout<<idx;
		cout<<'\n';
	}
}