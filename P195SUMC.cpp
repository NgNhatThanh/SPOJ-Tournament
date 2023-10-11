#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	int n;
	cin>>n;
	int x;
	map<int, int> mp;
	int dangco=0;
	while(n--) {
		cin>>x;
		if(x==50) {
			if(mp[50]>0) {
				mp[50]--;
			} 
			else if(mp[25]>=2) {
				mp[25]-=2;
			} 
			else {
				cout<<"NO";
				return 0;
			}
			dangco-=50;
		} else if(x==100) {
			if(dangco<100) {
				cout<<"NO";
				return 0;
			} else {
				if(mp[50]>=2) {
					mp[50]-=2;
				} 
				else if(mp[25]>=4) {
					mp[25]-=4;
				} 
				else if(mp[50]>=1 && mp[25]>=2) {
					mp[50]--;
					mp[25]-=2;
				} 
				else {
					cout<<"NO";
					return 0;
				}
				dangco-=100;
			}
		}
		dangco+=x;
		mp[x]++;
	}
	cout<<"YES";
}