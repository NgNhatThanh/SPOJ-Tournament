#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> nt;
vector<int> ke[10000];
bool visited[10000];
int cnt[10000];
int m, n;

int check(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

void sang() {
	for(int i=1001; i<=9997; i++) {
		if(check(i)) nt.emplace_back(i);
	}
}

bool lech(int a, int b) {
	int cnt=0;
	while(a) {
		if(a%10!=b%10) cnt++;
		a/=10;
		b/=10;
	}
	return cnt==1;
}

void canh() {
	for(int i=0; i<nt.size(); i++) {
		for(int j=i+1; j<nt.size(); j++) {
			if(lech(nt[i], nt[j])) {
				ke[nt[i]].emplace_back(nt[j]);
				ke[nt[j]].emplace_back(nt[i]);
			}
		}
	}
}

void bfs() {
	queue<int> q;
	q.push(n);
	visited[n]=true;
	while(!q.empty()) {
		int tmp = q.front();
		if(tmp==m) {
			cout<<cnt[tmp]<<'\n';
			return;
		}
		for(int x : ke[tmp]) {
			if(!visited[x]) {
				visited[x]=true;
				q.push(x);
				cnt[x]=cnt[tmp]+1;
			}
		}
		q.pop();
	}
}

int main() {
	sang();
	canh();
	int a;
	cin>>a;
	while(a--) {
		memset(visited, false, sizeof(visited));
		memset(cnt, 0, sizeof(cnt));
		cin>>n>>m;
		bfs();
	}
}