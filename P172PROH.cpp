#include <bits/stdc++.h>
#define ll long long
using namespace std;

string arr[8]= {"c=", "c-", "d-", "lj", "nj", "s=", "z="};

int check(string s) {
	for(string x : arr) {
		if(s==x) return 1;
	}
	return 0;
}

int main() {
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0; i<s.size(); i++) {
		if(i<s.size()-2) {
			string tmp = s.substr(i, 3);
			if(tmp=="dz=") {
				cnt++;
				i+=2;
				continue;
			}
		}
		if(i<s.size()-1) {
			string tmp = s.substr(i, 2);
			if(check(tmp)) {
				cnt++;
				i+=1;
				continue;
			}
		}
		cnt++;
	}
	cout<<cnt;
}