#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	faster()
	int a,b,c;
	cin>>a>>b>>c;
	int res=0;
	for(int i=b; i>=1; i--) {
		if(i-1<=a && i+1<=c) {
			res=3*i;
			break;
		}
	}
	cout<<res;
}