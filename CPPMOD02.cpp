#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n, m;
		cin>>n>>m;
		int ok=0;
		for(int i=1;i<m;i++){
			int tmp = n*i;
			if(tmp%m==1) {
				ok=1;
				cout<<i<<'\n';
				break;
			}
		}
		if(!ok) cout<<"-1\n";
	}
}