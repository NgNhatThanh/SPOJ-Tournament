#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s;
	cin>>s;
	ll res=0;
	ll cnt=0;
	for(char x : s) {
		if(x=='1') cnt++;
		else if(x=='2') res+=cnt;
	}
	cout<<res;
}