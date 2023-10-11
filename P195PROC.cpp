#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int &x : arr) cin>>x;
	sort(arr, arr+n);
	int cnt=0;
	int p=300;
	int pel=0;
	int sum=0;
	for(int x : arr) {
		if(p-x>=0) {
			p-=x;
			cnt++;
			sum+=x;
			pel+=sum;
		} else break;
	}
	cout<<cnt<<' '<<pel;
}