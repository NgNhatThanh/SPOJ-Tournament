#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> res;
	if(n==1) cout<<1;
	else if(!n) cout<<10;
	else {
		int tmp=n;
		while(n>1) {
			for(int i=9; i>=1; i--) {
				if(n%i==0) {
					res.push_back(i);
					n/=i;
					break;
				}
			}
			if(tmp==n) {
				cout<<-1;
				return 0;
			}
			tmp=n;
		}
		for(int i=res.size()-1; i>=0; i--) cout<<res[i];
	}
}