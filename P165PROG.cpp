#include <bits/stdc++.h>
#define ll long long
#define deptrai() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	deptrai()
	string s;
	cin>>s;
	int dai = s.size();
	int k = (s[0]=='-');
	string v (s.begin()+k, s.begin()+dai);
	if(v.size()>19) cout<<"BigInteger";
	else if(v.size()==19){
		if(v>"9223372036854775808") cout<<"BigInteger";
		else cout<<"long";
	}
	else{
		ll tmp = stoll(s);
		if(tmp>2147483647 || tmp<-2147483648) cout<<"long";
		else if(tmp>32767 || tmp<-32768) cout<<"int";
		else if(tmp>127 || tmp<-128) cout<<"short";
		else cout<<"byte";
	}
} 