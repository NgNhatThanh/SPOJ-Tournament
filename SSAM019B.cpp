#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int arr[n];
		map<int, int> mp;
		for(int &x : arr){
			cin>>x;
			mp[x]++;
		}
		int ok=0;
		for(int x : arr){
			if(mp[x]>1){
				ok=1;
				cout<<x<<'\n';
				break;
			}
		}
		if(!ok) cout<<"NO\n";
	}
}