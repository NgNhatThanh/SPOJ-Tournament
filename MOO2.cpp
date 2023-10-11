#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int b,e;
	cin>>b>>e;
	pair<int, char> be[b];
	pair<int, char> el[e];
	for(pair<int, char> &x : be) cin>>x.first>>x.second;
	for(pair<int, char> &x : el) cin>>x.first>>x.second;
	int i=0, j=0;
	int x1=0, x2=0;
	int res=0;
	while(i<b || j<e) {
		int move;
		int t1=x1, t2=x2;
		if(i<b && j<e) move=min(be[i].first, el[j].first);
		else if(i>=b) move=el[j].first;
		else move=be[i].first;
		if(i<b) {
			if(be[i].second=='L') x1-=move;
			else x1+=move;
			be[i].first-=move;
			if(be[i].first==0) i++;
		}
		if(j<e) {
			if(el[j].second=='L') x2-=move;
			else x2+=move;
			el[j].first-=move;
			if(el[j].first==0) j++;
		}
		if(t2-t1!=0) {
			if((x2-x1)*(t2-t1)<=0) res++;
		}
	}
	cout<<res;
}