#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	pair<int, int> arr[n];
	for(pair<int,int> &x: arr) cin>>x.first>>x.second;
	int res=0, val=0;
	int k=1;
	while(k<=5){
		int cnt=0;
		for(int i=0;i<n;i++){
			if(arr[i].first==k || arr[i].second==k) cnt++;
			else{
				if(cnt>res){
					res=cnt;
					val=k;
				}
				cnt=0;
			} 	
		}
		if(cnt>res){
			res=cnt;
			val=k;
		}
		k++;
	}
	cout<<res<<" "<<val;
}