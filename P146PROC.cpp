#include <bits/stdc++.h>
 
using namespace std;
 
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster
	vector<int> v;
	int n;
	for(int i=0; i<4; i++){
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	int res=3;
	for(int i=1; i<4; i++){
		if(v[i]!=v[i-1]) res--;
	}	
	cout << res;
}  