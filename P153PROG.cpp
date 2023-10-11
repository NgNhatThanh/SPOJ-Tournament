#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	long long n,k;
	cin >> n >> k;
	long long cut=n/2+n%2;
	if(k<=cut) cout << 2*k-1;
	else cout << 2*(k-cut);
} 