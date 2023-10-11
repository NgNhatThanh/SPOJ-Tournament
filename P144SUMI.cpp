#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b){
	if(!b) return a;
	return gcd(b, a%b);
}

int main() {
	int m,n;
	cin>>m>>n;
	int uc = gcd(m,n);
	int moing = ((m*n)/uc)/n;
	int moicai = ((m*n)/uc)/m;
	int cut = 0;
	int du = 0;
	while(m--){
		int tong = moicai + du;
		cut+=(tong)/moing-1;
		if((tong)%moing) cut++;
		du=(tong)%moing;
	}
	cout<<cut;
}