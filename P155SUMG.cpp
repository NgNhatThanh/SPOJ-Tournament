#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main () {
	int m,n;
	cin>>m>>n;
	int kq=min(m,n);
	if(kq%2) cout<<"Xavi";
	else cout<<"Wilshere";
}