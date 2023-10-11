#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

int main() {
	string s;
	cin>>s;
	s='+'+s;
	int n;
	cin>>n;
	while(n--) {
		char q;
		cin>>q;
		if(q=='-') {
			int i;
			cin>>i;
			s.erase(s.begin()+i, s.begin()+i+1);
		} else {
			int l,r,k;
			cin>>l>>r>>k;
			string t1="";
			string t2="";
			for(int i=l; i<=l+k-1; i++) t1+=s[i];
			for(int i=r; i<=r+k-1; i++) t2+=s[i];
			if(t1==t2) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}