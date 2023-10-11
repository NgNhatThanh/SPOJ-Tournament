#include <bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
void process(){
	string s;
	cin >> s;
	int dai=s.length();
	int cnt=1;
	for(int i=1; i<dai; i++){
		if(s[i] != s[i-1]) {
			cout << cnt << s[i-1];
			cnt=1;
		}
		else cnt++;
	}
	if(cnt) cout << cnt << s[dai-1];
	cout << '\n';
}
 
int main() {
	faster
	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		process();
	}
}  