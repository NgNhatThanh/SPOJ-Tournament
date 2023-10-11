#include <bits/stdc++.h>
using namespace std;
 
int n;
int arr[300];
 
void dequy(int k=1){
	if(k>n/2) return;
	vector<int> tmp(arr, arr+n);
	int j=0;
	for(int i=0;i<k;i++){
		int t1=tmp[i], t2=tmp[i+k];
		arr[j++]=(t1+t2)/2;
		arr[j++]=(t1-t2)/2;
	}
	dequy(k*2);
}
 
int main() {
	while(cin>>n){
		if(!n) return 0;
		for(int i=0;i<n;i++) cin>>arr[i];
		dequy();
		for(int i=0;i<n;i++) cout<<arr[i]<<' ';
		cout<<'\n';
	}
	return 0;
} 