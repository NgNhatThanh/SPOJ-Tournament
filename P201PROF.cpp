#include <iostream>
#include <map>
#include <cmath>
#define ll long long
using namespace std;

int main() {
	ll n;
	int k;
	cin>>n>>k;
	map<int, int> mp;
	ll tmp=n;
	for(int i=2; i<=sqrt(n); i++) {
		while(tmp%i==0) {
			mp[i]++;
			tmp/=i;
		}
	}
	if(tmp==2 || tmp==5) mp[tmp]++;
	int mu=min(mp[2], mp[5]);
	if(mu<k) {
		n*=pow(2,(k-mp[2])*(k>mp[2]))*pow(5,(k-mp[5])*(k>mp[5]));
	}
	cout<<n;

}