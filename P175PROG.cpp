#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct game {
	string id;
	string champ;
	char kq;
};

int cmp(game a, game b) {
	if(a.id.size()!=b.id.size()) return a.id.size()<b.id.size();
	return a.id<b.id;
}

int main() {
	int n;
	cin>>n;
	game arr[n];
	for(game &x : arr) {
		cin>>x.id>>x.champ>>x.kq;
	}
	sort(arr, arr+n, cmp);
	for(game x : arr) {
		if(x.champ=="AM" && x.kq=='W') {
			cout<<x.id;
			return 0;
		}
	}
}