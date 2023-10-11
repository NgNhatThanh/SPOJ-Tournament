#include <bits/stdc++.h>
#define ll long long
using namespace std;

string t1="123456790";
string t2="123456789023456789";
string t3="123456789";
// bai nay minh nhan nhieu th roi tim thay quy luat thui :>
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		string a="", b="";
		int i=0, j=0;
		int du=(n-1)/9;
		for(int k=0; k<9*du; k++) {
			if(i==9) i=0;
			a+=t1[i++];
		}
		i=0;
		for(int k=0; k<n-9*du; k++) {
			a+=t3[i++];
		}
		for(int k=0; k<n-1; k++) {
			if(j==18) j=9;
			b+=t2[j++];
		}
		reverse(b.begin(), b.end());
		if(n>1 && n%9==1) a[n-1]='0';
		cout<<a<<b<<'\n';
	}
}