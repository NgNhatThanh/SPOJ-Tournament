#include <bits/stdc++.h>
#include <map>
using namespace std;
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main(){
	faster()
	string s;
	cin >> s;
	long long res=0;
	int dai=s.length();
	int cnt=0;
	for(int i=0; i<dai-1; i++){
		if(s[i]==s[i+1]){
			if(s[i]=='(') cnt++;
			else res += cnt;
		}
	}
	cout << res;
}  