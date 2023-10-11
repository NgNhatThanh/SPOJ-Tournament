#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	while(cin>>n) {
		if(!n) return 0;
		int cnt=1;
		while(n!=1) {
			cnt++;
			if(n%2) n=n*3+1;
			else n/=2;
		}
		cout<<cnt<<'\n';
	}

}