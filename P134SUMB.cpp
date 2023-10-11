#include <bits/stdc++.h>

using namespace std;

#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
	faster()
	long long a,b;
	cin>>a>>b;
	long long delta = (4-a)*(4-a)-4*2*2*b;
	long long sqr=sqrt(delta);
	long long r1=(-(4-a)+sqr)/4;
	long long r2=b/r1;
	cout<<r2+2<<" "<<r1+2;
}