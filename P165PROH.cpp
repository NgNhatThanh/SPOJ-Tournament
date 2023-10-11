#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int dai = sqrt(a*c/b);
		int cao = a/dai;
		int rong = b/cao;
		int cv = 4*(dai + rong + cao);
		cout<<cv<<'\n';
	}
	
}