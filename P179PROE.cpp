#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	ll sum=0;
	for(int &x : arr) {
		cin>>x;
		sum+=x;
	}
	sort(arr, arr+n);
	double a=100, b=100, res=0;
	ll sum2=sum;
	for(int i=0; i<n-1; i++) {
		sum2-=arr[i];
		double a1=1.0*(n-i-1)/n;
		double b1=1.0*sum2/sum;
		if(b1-a1>res) {
			res=b1-a1;
			a=a1*100;
			b=b1*100;
		}
	}
	cout<<setprecision(1)<<fixed<<a<<' '<<b;
}