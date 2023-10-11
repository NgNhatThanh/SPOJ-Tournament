#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	cin>>arr[0];
	int cnt=0;
	for(int i=1;i<n;i++){
		cin>>arr[i];
		if(arr[i]<arr[i-1]) cnt++;
	}
	if((cnt>1 && cnt<n-1) || (cnt && arr[0]<arr[n-1])) cout<<"-1";
	else{
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				cout<<n-i-1;
				return 0;
			}
		}
		cout<<"0";
	}
}