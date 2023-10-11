#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
	faster()
	string s;
	cin>>s;
	int dai=s.length();
	int i=dai-1;
	vector<int> v;
	int du=dai%3;
	int k=0;
	int tmp=0;
	for(i; i>=du; i--) {
		if(k==3) {
			v.push_back(tmp);
			k=0;
			tmp=0;
		}
		tmp+=pow(2,k)*(s[i]-48);
		k++;
	}
	v.push_back(tmp);
	k=0;
	tmp=0;
	if(du) {
		for(int i=du-1; i>=0; i--) {
			tmp+=pow(2,k)*(s[i]-48);
			k++;
		}
		v.push_back(tmp);
	}
	reverse(v.begin(), v.end());
	for(int x:v) cout<<x;

}