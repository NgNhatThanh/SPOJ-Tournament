#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	faster()
	int a;
	cin>>a;
	while(a--) {
		int n,g;
		cin>>n>>g;
		map<int, int> hang;
		map<int, int> cot;
		map<int, int> chinh;
		map<int, int> phu;
		while(g--) {
			int k,x,y,s,t;
			cin>>k>>x>>y>>s>>t;
			for(int i=0; i<k; i++) {
				int h=x+i*s, c=y+i*t;
				hang[h]++;
				cot[c]++;
				chinh[h+c-1]++;
				phu[h-c+n]++;
			}
		}
		int cnt=0;
		for(pair<int,int> x : hang) {
			if(x.second>=2) cnt+=(x.second-1);
		}
		for(pair<int,int> x : cot) {
			if(x.second>=2) cnt+=(x.second-1);
		}
		for(pair<int,int> x : chinh) {
			if(x.second>=2) cnt+=(x.second-1);
		}
		for(pair<int,int> x : phu) {
			if(x.second>=2) cnt+=(x.second-1);
		}
		cout<<cnt<<'\n';
	}
}