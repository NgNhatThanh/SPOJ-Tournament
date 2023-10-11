#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		cout<<1<<" ";
		for(int i=2;i<=n;i++){
			if(i%2==0) cout<<2<<" ";
			else{
				int ok=0;
				for(int j=3;j<=sqrt(i);j++){
					if(i%j==0){
						cout<<j<<" ";
						ok=1;
						break;
					}
				}
				if(!ok) cout<<i<<' ';
			}
		}
		cout<<'\n';
	}
	
}