#include <iostream>
#include <map>
#include <cmath>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int minres=2*(n/7)+(n%7==6);;
	int maxres;
	if(n<=7) maxres=2-(n==1);
	else {
		n-=2;
		maxres+=2*(n/7)+(n%7==6)+2;
	}
	cout<<minres<<' '<<maxres;
}