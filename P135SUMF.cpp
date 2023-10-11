#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
	long long n;
	cin>>n;
	long long res=0;
	int cal=n+2;
	for(int i=1; i<=n; i++) {
		res+=cal*i;
	}
	cout<<res;
}