#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int res=0;
		int can = sqrt(n);
		for(int i=1;i<=can;i++){
			if(n%i==0){
				if(i%2==0) res++;
				if((n/i)%2==0 && n/i!=i) res++;
			}
		}
		cout<<res<<'\n';
	}
}
