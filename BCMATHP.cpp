#include <bits/stdc++.h>
 
using namespace std;
 
int chudau(long long n){
	int res;
	while(n){
		res = n%10;
		n /= 10;
	}
	return res;
}
 
int main() {
	int a,b;
	cin >> a >> b;
	for(int i=a+1; i<=62; i++){
		long long tmp = (1ll << i);
		if(chudau(tmp) == b){
			cout << i;
			return 0;
		}
	}
	cout << 0;
}   