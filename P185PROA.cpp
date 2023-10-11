#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		string n;
		cin>>n;
		if(n[0]!='9') {
			char tmp = '9'-n[0]+48;
			n[0]=min(n[0], tmp);
		}
		for(int i=1; i<n.size(); i++) {
			char tmp = '9'-n[i]+48;
			n[i]=min(n[i], tmp);
		}
		cout<<n<<'\n';
	}
}