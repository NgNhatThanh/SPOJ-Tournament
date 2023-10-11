#include <bits/stdc++.h>
#define ll long long
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

string key[]= {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

int kc(char a, char b) {
	int la,ra,lb,rb;
	for(int i=0; i<3; i++) {
		for(int j=0; j<key[i].size(); j++) {
			if(key[i][j]==a) {
				la=i;
				ra=j;
			}
			if(key[i][j]==b) {
				lb=i;
				rb=j;
			}
		}
	}
	return abs(la-lb)+abs(ra-rb);
}

int check(string a, string b) {
	int res=0;
	for(int i=0; i<a.size(); i++) {
		if(a[i]!=b[i]) res+=kc(a[i], b[i]);
	}
	return res;
}

int cmp(pair<string, int> a, pair<string, int> b) {
	if(a.second==b.second) return a.first<=b.first;
	return a.second<b.second;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		int n;
		cin>>n;
		pair<string,int> arr[n];
		for(pair<string, int> &x : arr) {
			cin>>x.first;
			x.second=check(x.first, s);
		}
		sort(arr, arr+n, cmp);
		for(int i=0; i<n; i++) {
			cout<<arr[i].first<<' '<<arr[i].second<<'\n';
		}
	}
}