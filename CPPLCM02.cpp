#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		map<int, int> mp;
		int k=0;
		int check[50]= {};
		for(int i=2; i<=n; i++) {
			int tmp=i;
			for(int j=2; j<=sqrt(i); j++) {
				if(tmp%j==0) {
					if(mp[j]==0) check[k++]=j;
					int cnt=0;
					while(tmp%j==0) {
						tmp/=j;
						cnt++;
					}
					mp[j]=max(mp[j], cnt);
				}
			}
			if(tmp>1) {
				if(mp[tmp]==0) check[k++]=tmp;
				mp[tmp]=max(mp[tmp], 1);
			}
		}
		long long res=1;
		for(int i=0; i<k; i++) {
			long long add = pow(check[i], mp[check[i]]);
			res *=add;
		}
		cout<<res<<'\n';
	}
}