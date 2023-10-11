#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	ll x;
	ll pre[n];
	cin>>x;
	pre[0]=x;
	for(int i=1; i<n; i++) {
		cin>>x;
		pre[i]=pre[i-1]+x;
	}
	if(pre[n-1]%3 || n<3) cout<<0;
	else {
		ll res=0;
		ll chia = pre[n-1]/3;
		vector<int> idx;
		for(int i=0; i<n-1; i++) {
			if(pre[i]==2*chia) {
				if(idx.size()) res+=idx.size();
			}
			if(pre[i]==chia) idx.push_back(i);
		}
		cout<<res;
	}
}
