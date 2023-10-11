#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;
 
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster()
	int n, k;
	cin >> n >> k;
	int res=k/(n-1);
	if(k%(n-1)==0) cout << res-1+k << " " << res+k;
	else{
		cout << res+k << " " << res+k;
	}
}  