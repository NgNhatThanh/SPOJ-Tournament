#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c1=0, c2=0;
	string s;
	cin>>s;
	string tmp=s;
	string tmp2;
	c1++;
	while(n--) {
		cin>>s;
		if(s==tmp) c1++;
		else {
			tmp2=s;
			c2++;
		}
	}
	if(c1<c2) cout<<tmp2;
	else cout<<tmp;
}