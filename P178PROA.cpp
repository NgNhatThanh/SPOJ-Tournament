#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	while(cin>>n) {
		if(!n) return 0;
		if(n>1e6) {
			if(n<=5*1e6) n*=0.9;
			else n*=0.8;
		}
		cout<<n<<'\n';
	}
}