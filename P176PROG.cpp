#include <bits/stdc++.h>
using namespace std;

// ngoi mo nhieu test ra duoc chu cung k biet tai sao dau :))
int main() {
	int n,x,y,z;
	cin>>n>>x>>y>>z;
	vector<int> uoc;
	int can=sqrt(z);
	for(int i=1; i<=can; i++) {
		if(z%i==0) {
			uoc.push_back(i);
			if(z/i!=i) uoc.push_back(z/i);
		}
	}
	sort(uoc.begin(), uoc.end());
	int res;
	for(int i=uoc.size()-1; i>=0; i--) {
		if(y%uoc[i]==0) {
			res=z/uoc[i];
			break;
		}
	}
	if(n<res) {
		res=n;
	}
	cout<<res;
}