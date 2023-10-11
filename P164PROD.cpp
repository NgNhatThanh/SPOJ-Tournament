#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a,c;
vector<int> a3;
vector<int> c3;

void chuyenhe(int n, vector<int> &a) {
	while(n) {
		a.push_back(n%3);
		n/=3;
	}
}

int main() {
	cin>>a>>c;
	chuyenhe(a,a3);
	chuyenhe(c,c3);
	while(a3.size()<c3.size()) a3.push_back(0);
	while(c3.size()<a3.size()) c3.push_back(0);
	vector<int> b;
	for(int i=0; i<a3.size(); i++) {
		if(a3[i]<=c3[i]) b.push_back(c3[i]-a3[i]);
		else {
			b.push_back(c3[i]+3-a3[i]);
		}
	}
	ll res=0;
	for(int i=0; i<b.size(); i++) {
		res+=1ll*pow(3,i)*b[i];
	}
	cout<<res;

}
