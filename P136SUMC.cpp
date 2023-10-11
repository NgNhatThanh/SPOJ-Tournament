#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

void process(int &a, int &b) {
	int tmp1=0, tmp2=0;
	while(a&& b) {
		tmp1=tmp1*10+a%10;
		tmp2=tmp2*10+b%10;
		a/=10;
		b/=10;
	}
	a=tmp1;
	b=tmp2;
}

int main() {
	faster
	int a,b;
	cin>>a>>b;
	process(a,b);
	cout<<fmax(a,b);
}