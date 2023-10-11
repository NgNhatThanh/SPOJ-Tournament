#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int k=n/2;
	int add=-1;
	for(int i=1;i<=n;i++){
		if(k==-1){
			add=1;
			k=1;
		}
		for(int j=1;j<=n;j++){
			if(j<=k || j>n-k) cout<<"*";
			else cout<<"D";
		}
		k+=add;
		cout<<'\n';
	}
}