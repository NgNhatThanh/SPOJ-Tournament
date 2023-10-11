#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	ll arr[n];
	ll sum1=0, sum2=0, msum1=0;
	int check=0;
	for(ll &x: arr) {
		cin>>x;
		if(x>=0) check=1;
		if(x>0) sum2+=x;
		msum1+=x;
		if(msum1<0) msum1=0;
		sum1=max(msum1, sum1);
	}
	if(!check) {
		sort(arr, arr+n, greater<ll>());
		sum1=sum2=arr[0];

	}
	cout<<sum1<<' '<<sum2;
}