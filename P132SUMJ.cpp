#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main () {
	string s;
	cin>>s;
	string tmp=s;
	int dai=s.length();
	int idx=-1;
	for(int i=dai-1; i>=0; i--) {
		int ok=0;
		for(int j=i-1; j>=0; j--) {
			if(ok) break;
			if(s[j]<s[i]) {
				swap(s[i],s[j]);
				ok=1;
				idx=j;
			}
		}
		if(ok) break;
	}
	if(idx==-1) cout<<"0";
	else {
		sort(s.begin()+idx+1, s.begin()+dai);
		cout<<s;
	}
}