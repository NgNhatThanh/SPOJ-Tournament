#include <bits/stdc++.h>

using namespace std;

int checkdx(string n) {
	int dai = n.length();
	int l=0, r=dai-1;
	while(l<r) {
		if(n[l]!=n[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int main() {
	int n;
	cin>>n;
	while(n--) {
		string s;
		cin>>s;
		if(checkdx(s)) printf("YES\n");
		else printf("NO\n");
	}	
}