#include <bits/stdc++.h>
using namespace std;

int check(int a,int b) {
	return min({abs(a-b), b+10-a, a+10-b});
}

int main() {
	int n;
	cin>>n;
	string a, b;
	cin>>a>>b;
	int res=0;
	for(int i=0; i<n; i++) {
		if(a[i]!=b[i]) {
			res+=check(a[i]-48, b[i]-48);
		}
	}
	cout<<res;
}