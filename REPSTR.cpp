#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	pair<int, int> arr[n];
	int xmin =1e9+7, ymax = 0;
	for(pair<int, int> &x : arr){
		cin>>x.first>>x.second;
		xmin=min(x.first, xmin);
		ymax=max(x.second, ymax);
	}
	for(int i=0;i<n;i++){
		if(arr[i].first==xmin){
			if(arr[i].second==ymax){
				cout<<i+1;
				return 0;
			}
		}
	}
	cout<<"-1";
	
}