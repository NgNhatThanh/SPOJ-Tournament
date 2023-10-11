#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;
 
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);
 
int cas=1;
 
void process(int n){
	vector<int> v;
	int tmp;
	set<int> sv;
	for(int i=0; i<n; i++){
		cin >> tmp;
		v.push_back(tmp);
		sv.insert(tmp);
	}
	int cnt=0;
	while(sv.size()!=1){
		if(cnt>=1000){
			cout << "Case " << cas++ << ": " << "not attained\n";
			return;
		}
		sv.clear();
		int tmp=v[0];
		for(int i=0; i<n-1; i++){
			v[i]=abs(v[i]-v[i+1]);
			sv.insert(v[i]);
		}
		v[n-1]=abs(v[n-1]-tmp);
		sv.insert(v[n-1]);
		cnt++;
	}
	cout << "Case " << cas++ << ": " << cnt << " iterations\n";
	
}
 
int main() {
	faster()
	int n;
	while(cin >> n){
		if(n==0) return 0;
		process(n);
	}
 
}  