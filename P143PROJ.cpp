#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n,m,a;
	cin>>n>>m>>a;
	long long res=0;
	res+=((n/a)*(m/a));
	if(n%a && m%a) res++;
	if(n%a) res+=m/a;
	if(m%a) res+=n/a;
	cout<<res;
}