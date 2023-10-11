#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin>>s;
	int i=s.size()-2;
	while(i>=0 && s[i]>=s[i+1]) --i;
	if(i<0) cout<<"BIGGEST\n";
	else {
		for(int j=s.size()-1; j>i; --j) {
			if(s[j]>s[i]) {
				swap(s[i], s[j]);
				break;
			}
		}
		sort(s.begin()+i+1, s.end());
		cout<<s<<'\n';
	}
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		solve();
	}
}