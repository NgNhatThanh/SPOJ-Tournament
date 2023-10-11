#include <bits/stdc++.h>

using namespace std;

int main() {
	char a;
	int m,n;
	while(cin>>a>>n>>a>>m) {
		if(n==0) return 0;
		string res = "";
		while(m) {
			char tmp;
			if(m%26==0) {
				tmp='Z';
				m-=26;
			} else {
				tmp=(char)(m%26+64);
				m-=m%26;
			}
			m/=26;
			res+=tmp;
		}
		reverse(res.begin(), res.end());
		cout<<res<<n<<'\n';
	}
}