#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		set<int> v;
		int arr[n];
		for(int &x : arr) {
			cin>>x;
			v.insert(x);
		}
		int res=0;
		for(int x : v) {
			int cnt=1;
			vector<int> tmp;
			for(int k : arr) {
				if(k!=x) tmp.push_back(k);
			}
			for(int i=1; i<tmp.size(); i++) {
				if(tmp[i]==tmp[i-1]) cnt++;
				else {
					res=max(res, cnt);
					cnt=1;
				}
			}
			res=max(res, cnt);
		}
		cout<<res<<'\n';
	}
}