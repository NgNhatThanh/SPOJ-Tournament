#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin>>a;
	int res=0;
	while(a--){
		int p ,q ;
		cin>>p>>q;
		if(q-p>=2) res++;
	}
	cout<<res;
}