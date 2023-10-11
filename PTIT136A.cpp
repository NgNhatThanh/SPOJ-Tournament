#include <bits/stdc++.h>
 
using namespace std;

int main() {
	int n;
	cin>>n;
	map<string, int> mp;
	int sum=0;
	int res=0;
	while(n--){
		string s;
		cin>>s;
		if(mp[s]>sum-mp[s]) res++;
		sum++;
		mp[s]++;
	}
	cout<<res;
} 