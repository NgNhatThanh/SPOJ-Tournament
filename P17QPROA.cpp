#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(int n) {
	int tmp = sqrt(n);
	return tmp*tmp==n;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		map<int,int> mp;
		int cnt=0;
		int can = sqrt(n);
		for(int i=0; i<=can; i++) {
			int tmp = n-i*i;
			if(check(tmp) && mp[i*i]==0 && mp[tmp]==0) {
				cnt++;
				mp[i*i]=1;
				mp[tmp]=1;
			}
		}
		cout<<cnt<<'\n';
	}
}