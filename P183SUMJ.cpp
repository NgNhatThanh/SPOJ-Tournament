#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int arr[m];
	map<int, int> mp;
	for(int &x : arr) cin>>x;
	int tmp;
	int vantay[n];
	for(int &x : vantay){
		cin>>x;
		mp[x]++;
	} 
	for(int x : arr){
		if(mp[x]) cout<<x<<" ";
	}
}