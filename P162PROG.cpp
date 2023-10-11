#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int res=0;
	while(n){
		if(n%2){
			n--;
			res++;
		}
		else n/=2;
	}
	cout<<res;
}