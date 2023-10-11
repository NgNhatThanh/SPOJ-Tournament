#include <iostream>
#include <cstring>

using namespace std;

int n;
bool arr[8][8];
bool daqua[8][8];
int di[]= {1,-1,0,0};
int dj[]= {0,0,1,-1};
int res=0;

void dfs(int i, int j, int cnt=1) {
	if(i==5 && j==5 && cnt==25-n) {
		res++;
		return;
	}
	daqua[i][j]=true;
	for(int k=0; k<4; k++) {
		int t1=i+di[k];
		int t2=j+dj[k];
		if(arr[t1][t2]==true && !daqua[t1][t2]) {
			daqua[t1][t2]=true;
			dfs(t1,t2,cnt+1);
			daqua[t1][t2]=false;
		}
	}
	daqua[i][j]=false;
}

int main() {
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=5; j++) arr[i][j]=true;
	}
	cin>>n;
	int x,y;
	for(int i=1; i<=n; i++) {
		cin>>x>>y;
		arr[x][y]=false;
	}
	daqua[1][1]=true;
	dfs(1,1);
	cout<<res;
}