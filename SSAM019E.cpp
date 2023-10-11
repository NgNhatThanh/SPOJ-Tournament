#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, s;
	cin>>n>>s;
	int arr[n];
	for(int &x : arr) cin>>x;
	int cnt=0;
	sort(arr, arr+n);
	for(int i=n-1;i>=0;i--){
		while(s-arr[i]>=0){
			cnt++;
			s-=arr[i];
		}
	}
	cout<<cnt;
}