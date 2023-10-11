#include <bits/stdc++.h>
 
using namespace std;
 
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster
	string a,b;
	cin >> a >> b;
	int sv1[27]={};
	int sv2[27]={};
	int dai1=a.length();
	int dai2=b.length();
	for(int i=0; i<dai1; i++){
		sv1[a[i]-96]++;
	} 
	for(int i=0; i<dai2; i++){
		sv2[b[i]-96]++;
	} 
	int res=0;
	for(int i=1; i<=26; i++){
		res+=abs(sv1[i]-sv2[i]);
	}
	cout << res;
}  