#include <bits/stdc++.h>

using namespace std;

int main() {
	int s , k;
	cin>>s>>k;
	int res = s*k;
	for(int i=0;i<5;i++){
		int n;
		cin>>n;
		cout<<n-res<<" ";
	}
}