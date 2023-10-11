#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	int arr[n];
	for(int &x : arr) cin>>x;
	sort(arr, arr+n);
	int res=0;
	for(int i=n-1;i>=1;i--){
		while(arr[i]-arr[i-1]<=k && i>=1){
			i--;
		}
		res++;
	}
	if(arr[1]-arr[0]>k) res++;
	cout<<res;
}