#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int k=1;
	int res=0;
	while(n){
		int sl = k*(k+1)/2;
		if(n-sl<0) break;
		n-=sl;
		res++;
		k++;
	}
	cout<<res;
}