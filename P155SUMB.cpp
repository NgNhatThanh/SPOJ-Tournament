#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	string tmp=s;
	s+="0000";
	reverse(s.begin(), s.end());
	reverse(tmp.begin(), tmp.end());
	int i=0;
	int du=0;
	vector<int> res(10000,0);
	while(i<s.size()) {
		int k1=s[i]-48;
		int k2=0;
		if(i<tmp.size()) k2=tmp[i]-48;
		res[i]=k1+k2+du;
		du=0;
		if(res[i]>=2) {
			res[i]-=2;
			du++;
		}
		i++;
	}
	if(du) res[i]=1;
	while(res[i]==0) i--;
	res.resize(i+1);
	reverse(res.begin(), res.end());
	for(int x : res) cout<<x;
}