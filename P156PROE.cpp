#include <bits/stdc++.h>
#define ll long long
using namespace std;

string mau = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

void change(char &x, int n){
	int idx = mau.find(x);
	if(n+idx>=28) x=mau[n+idx-28];
	else x=mau[n+idx];
}

int main() {
	int n;
	while(cin>>n){
		if(n==0) return 0;
		string s;
		cin>>s;
		reverse(s.begin(), s.end());
		for(int i=0;i<s.size();i++){
			change(s[i], n);
		}
		cout<<s<<'\n';
	}
}