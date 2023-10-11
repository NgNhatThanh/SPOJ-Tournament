#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(!n) return 0;
		int arr[n+1];
		vector<int> v;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			while(v.size()<arr[i]){
				v.push_back(i);
			}
		}
		for(int x : v) cout<<x<<" ";
		cout<<'\n';
	}
}