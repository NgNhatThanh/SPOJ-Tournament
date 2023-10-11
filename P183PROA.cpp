#include <bits/stdc++.h>
#define ll long long
using namespace std;

int lamtron(double a, int n) {
	return (int)(round)(a/n);
}

int main() {
	int n,k;
	cin>>n>>k;
	int sum=0;
	int tmp=n;
	int x;
	while(tmp--) {
		cin>>x;
		sum+=x;
	}
	int res=0;
	while(lamtron((double)sum, n)<k) {
		n++;
		sum+=k;
		res++;
	}
	cout<<res;
}