#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b){
	if(a.first==b.first	) return a.second<b.second;
	return a.first<b.first;
}

int main() {
	int x, y ,a ,b;
	cin>>x>>y>>a>>b;
	int res=0;
	vector<pair<int, int>> v;
	for(int i=a;i<=x;i++){
		for(int j=b;j<=y;j++){
			if(j<i){
				v.push_back(make_pair(i ,j));
				res++;
			}
		}
	}
	sort(v.begin(), v.end(), cmp);
	cout<<res<<'\n';
	for(pair<int, int> x : v) cout<<x.first<<" "<<x.second<<'\n';
	
}