#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int tmp = 180-n;
		double res = 1.0*360/tmp;
		if((ll)res == res) cout<<"YES\n";
		else cout<<"NO\n";
	}
}