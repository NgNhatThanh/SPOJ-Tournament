#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a,b;
	cin>>n>>a>>b;
	int res=n-a;
	if(b<res) {
		res=res-(res-b)+1;
	}
	cout<<res;
}