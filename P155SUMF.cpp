#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++) cin>>arr[i];
	int res[n+1];
	res[1]=arr[1];
	int sum[n+1];
	sum[1]=arr[1];
	for(int i=2;i<=n;i++){
		res[i]=arr[i]*i-sum[i-1];
		sum[i]=res[i]+sum[i-1];
	}
	for(int i=1;i<=n;i++) cout<<res[i]<<" ";
}