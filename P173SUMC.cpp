#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int res=0;
	for(int i=0; i<=1000; i++) {
		for(int j=0; j<=1000; j++) {
			if(i*i+j==n && i+j*j==m) res++;
		}
	}
	cout<<res;
}