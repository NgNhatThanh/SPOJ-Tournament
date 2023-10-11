#include <bits/stdc++.h>
using namespace std;

int gt(string a) {
	int res=0;
	for(char x : a) {
		res+=x-65;
	}
	return res;
}

void chuyen(char &a, int n) {
	if(a+n-65>=26) {
		n=a+n-65-26;
		a=65;
	}
	a+=n;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		string t1(s.begin(), s.begin()+s.size()/2);
		string t2(s.begin()+s.size()/2, s.end());
		int gt1=gt(t1)%26;
		int gt2=gt(t2)%26;
		for(int i=0; i<s.size()/2; i++) {
			chuyen(t1[i], gt1);
			chuyen(t2[i], gt2);
			chuyen(t1[i], (int)t2[i]-65);
		}
		cout<<t1<<'\n';
	}
}