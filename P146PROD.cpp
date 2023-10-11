#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int res=0;
	int tmp;
	while(n--) {
		int kt=0;
		for(int i=0; i<3; i++) {
			cin>>tmp;
			if(tmp) kt++;
		}
		if(kt>1) res++;
	}
	cout<<res;

}