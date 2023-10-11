#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		pair<double, double> arr[n];
		for(pair<double, double> &x: arr){
			cin>>x.first>>x.second;
		}
		int res[205]={};
		res[0]=1;
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(arr[j].first < arr[i].first && arr[j].second > arr[i].second){
					res[i] = max(res[i], res[j]);
				}
			}
			res[i]++;
		}
		int kq=0;
		for(int i=0;i<n;i++) kq = max(kq, res[i]);
		cout<<kq<<'\n';
	}
}