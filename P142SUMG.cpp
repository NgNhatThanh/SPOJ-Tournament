#include <bits/stdc++.h>
#define ll long long
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

char dich(char n, int d) {
	int tmp=n;
	if(tmp<65+d) return (char)(91-(d-(tmp-65)));
	return (char)(tmp-d);
}

int main() {
	int a;
	cin>>a;
	cin.ignore();
	while(a--) {
		string s;
		getline(cin, s);
		int check[27]= {};
		int maxfre=0;
		for(char x : s) {
			if(x!=' ') {
				check[x-64]++;
				maxfre=max(maxfre, check[x-64]);
			}
		}
		int cnt=0;
		int idx=0;
		for(int i=1; i<=26; i++) {
			if(check[i]==maxfre) {
				cnt++;
				idx=i;
			}
		}
		if(cnt>1) {
			cout<<"NOT POSSIBLE\n";
			continue;
		}
		int d=idx-5;
		if(d<0) d=26+d;
		cout<<d<<' ';
		for(int i=0; i<s.size(); i++) {
			if(s[i]!=' ') {
				s[i]=dich(s[i], d);
			}
		}
		cout<<s<<'\n';
	}
}