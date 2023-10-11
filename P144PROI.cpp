#include <bits/stdc++.h>
 
using namespace std;

int main() {
	int n, s;
	cin>>s>>n;
	vector<pair<int, int>> v;
	for(int i=0;i<n;i++){
		pair<int ,int> tmp;
		cin>>tmp.first>>tmp.second;
		v.emplace_back(tmp);
	}
	int check[1005]={};
	int kt=1;
	while(kt){
		kt=0;
		for(int i=0;i<n;i++){
			if(s>v[i].first && check[i]==0){
				kt=1;
				check[i]=1;
				s+=v[i].second;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(check[i]==0){cout<<"NO";
		return 0;
		}
	}
	cout<<"YES";
} 