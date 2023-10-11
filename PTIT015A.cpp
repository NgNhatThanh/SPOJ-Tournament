#include <bits/stdc++.h>

using namespace std;

int cmp(string a, string b){
	string tmp1 = a+b, tmp2= b+a;
	if(tmp1[0]=='0') return 0;
	if(tmp2[0]=='0') return 1;
	return tmp1>=tmp2;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string a,b,c;
		cin>>a>>b>>c;
		string res=a+b+c;
		sort(res.begin(), res.end());
		reverse(res.begin(), res.end());
		cout<<res<<'\n';
	}
}