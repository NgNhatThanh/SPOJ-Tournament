#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin>>n;
	int k=n;
	int tmp;
	int check[3005]={};
	while(k--){
		cin>>tmp;
		if(tmp<=n) check[tmp]++;
	}
	for(int i=1;i<=n;i++){
		if(!check[i]){
			cout<<i;
			return 0;
		}
	}
	cout<<n+1;
}