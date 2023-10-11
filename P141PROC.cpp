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
	int res=0;
	while(n--){
		string s;
		cin >> s;
		if(s[0]=='+' || s[2]=='+') res++;
		else if(s[0]=='-' || s[2]=='-') res--;
	}
	cout << res;
}   