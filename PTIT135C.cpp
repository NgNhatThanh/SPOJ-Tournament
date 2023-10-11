#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b, a%b);
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int &x : arr) {
		cin>>x;
	}
	int k = abs(arr[0]-arr[1]);
	for(int i=2; i<n; i++) {
		k=gcd(k, abs(arr[i]-arr[i-1]));// a-b la so du lon nhat cua a%b
	}
	vector<int> res;
	res.push_back(k);
	for(int i=2; i<=sqrt(k); i++) {
		if(k%i==0) {
			res.push_back(i);
			if(k/i!=i) res.push_back(k/i);
		}
	}
	sort(res.begin(), res.end());
	for(int x : res) cout<<x<<' ';
}