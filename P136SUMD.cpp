#include <bits/stdc++.h>

using namespace std;

int main() {
	string n;
	int k;
	cin>>n>>k;
	if(k>n.size()  || (k==n.size()&& n[0]<'5')){
		cout<<"0";
	} else {
		int i=n.size()-1;
		for(; i>=0; i--) {
			if(k<=0) break;
			if(n[i]>='5') {
				n[i]='0';
				k--;
				while(n[i-1]=='9') {
					i--;
					n[i]='0';
					k--;
					if(i==0) break;
				}
				if(i>0)n[i-1]++;
			} else {
				n[i]='0';
				k--;
			}
		}
		if(i<0) cout<<"1";
		cout<<n;
	}

}