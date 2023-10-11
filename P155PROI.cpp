#include <bits/stdc++.h>
 
using namespace std;
 
int main (){
	int n;
	cin >> n;
	pair<int ,int > arr[n];
	int res=n;
	map<int, int> mp;
	for(pair<int, int >  &x : arr){
		cin >> x.first >> x.second;
		mp[x.second]++;
	}
	for(pair<int, int> x : arr){
		if(x.first!=x.second && mp[x.first]) res--;
		else{
			if(x.first==x.second){
				if(mp[x.second]>1) res--;
			}
		}
	}
	cout << res;
} 