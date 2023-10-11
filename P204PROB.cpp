#include <iostream>
#define ll long long

using namespace std;

int main() {
	ll n;
	cin>>n;
	if(n%2) cout<<n/2-n;
	else cout<<n/2;
}