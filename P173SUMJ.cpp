#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		int arr[n];
		map<int,int> mp;
		for(int &x : arr) {
			cin>>x;
			mp[x]++;
		}
		int res=0;
		int cnt=0;
		for(pair<int, int> x : mp) {
			if(x.second>=4) {
				res+=x.second/4;
				x.second%=4;
			}
			if(x.second>=2) cnt++;
		}
		res+=cnt/2;
		cout<<res<<'\n';
	}
}