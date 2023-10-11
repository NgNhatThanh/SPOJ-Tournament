#include <iostream>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	ll arr[n];
	for(ll &x : arr) cin>>x;
	int l=0, r=n-1;
	int res=0;
	while(l<r) {
		if(arr[l]!=arr[r]) {
			if(arr[l]<arr[r]) {
				arr[l+1]+=arr[l];
				l++;
			} 
			else {
				arr[r-1]+=arr[r];
				r--;
			}
			res++;
		} 
		else {
			l++;
			r--;
		}
	}
	cout<<res;
}