#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n, x;
	cin>>n>>x;
	int res=0;
	map<int, int> mp;
	for(int i=1;i<=n;i++){
		if(x%i==0 && x/i<=n){
			if(!mp[i]){
				res++;
				mp[i]++;
			}
			if(x/i!=i){
				if(!mp[x/i]){
					res++;
					mp[x/i]++;
				}
			}
			
		}
	}
	cout<<res;
}