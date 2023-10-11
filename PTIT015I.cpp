#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n, k;
		cin>>n>>k;
		int res=0;
		int tmp;
		while(n--){
			cin>>tmp;
			k-=tmp;
			if(k>=0) res++;
		}
		cout<<res<<'\n';
	}
}	