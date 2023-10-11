#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> nt;
bool visited[1100];
vector<int> ke[1100];

int check(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

void sang() {
	for(int i=2; i<=1100; i++) {
		if(check(i)) nt.push_back(i);
	}
}

void dfs(int n) {
	visited[n]=true;
	for(int x : ke[n]) {
		if(!visited[x]) dfs(x);
	}
}

int main() {
	sang();
	int t;
	cin>>t;
	int test=1;
	while(t--) {
		cout<<"Case #"<<test++<<": ";
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=1000; i++) ke[i].clear();
		int a,b,p;
		cin>>a>>b>>p;
		int cnt=0;
		set<int> se;
		vector<int> uoc[1100];
		for(int i=a; i<=b; i++) {
			if(i<p) cnt++;
			else {
				int ok=0;
				for(int x : nt) {
					if(x>=p && i%x==0) {
						ok=1;
						se.insert(x);
						uoc[x].push_back(i);
					}
				}
				if(!ok) cnt++;
			}
		}
		for(int x : se) {
			for(int v : uoc[x]) {
				for(int k : uoc[x]) {
					ke[k].push_back(v);
					ke[v].push_back(k);
				}
			}
		}
		for(int x : se) {
			for(int v : uoc[x]) {
				if(!visited[v]) {
					cnt++;
					dfs(v);
				}
			}
		}
		cout<<cnt<<'\n';
	}
}
