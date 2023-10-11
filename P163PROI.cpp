#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main () {
	ll d1, d2, d3;
	cin>>d1>>d2>>d3;
	ll a = d1+d2+d3;
	ll b = 2*d1 + 2*d3;
	ll c = 2*d2+ 2*d3;
	ll d = 2*d1 + 2*d2;
	ll res = min({a,b,c,d});
	cout<<res;
}