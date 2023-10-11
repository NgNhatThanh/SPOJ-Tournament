#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;
 
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster()
	int n;
	cin >> n;
	cin.ignore();
	string s;
	cin >> s;
	int l=0, r=0;
	int ok=1;
	for(int i=0; i<n; i++){
		if(!ok) break;
		if(s[i]!='4' && s[i]!='7') ok=0;
		if(i<n/2) l+=s[i];
		else r+=s[i];
	}
	if(!ok || l!=r) cout << "NO";
	else cout << "YES";
} 