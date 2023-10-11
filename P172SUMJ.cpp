#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	if(m>n) cout<<-1;
	else {
		int k=n/2;
		int k1=n%2;
		int cnt=k+k1;
		while(cnt%m) {
			if(k<0) {
				cout<<-1;
				return 0;
			}
			k--;
			cnt++;
		}
		cout<<cnt;
	}
}