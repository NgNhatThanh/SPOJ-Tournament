#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		if(n==2) cout<<"4\n";
		else{
			int res = n*n/2;
			if(n&1) res++;
			cout<<res<<'\n';
		}
	}
}