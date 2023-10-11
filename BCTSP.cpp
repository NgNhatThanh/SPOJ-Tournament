#include <iostream>
#include <set>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int n;
int inp[20][20];
bool daqua[20];
int res = 1e9;

void process(int i, int cnt=1, int sum=0) {
	if(cnt==n) {
		res=min(res, sum+inp[i][1]);
		return;
	}
	if(cnt>n || sum>res) return;
	for(int j=1; j<=n; j++) {
		if(!daqua[j]) {
			daqua[j]=true;
			process(j, cnt+1, sum+inp[i][j]);
			daqua[j]=false;
		}
	}
}

int main() {
	faster()
	cin>>n;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			cin>>inp[i][j];
		}
	}
	daqua[1]=true;
	process(1);
	cout<<res;
}