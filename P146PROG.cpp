#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	int ti=0, teo=0;
	int l=0 ,r=n-1;
	int sumti=0, sumteo=0;
	while(1){
		if(r==l){
			ti++;
			break;
		}
		if(r-l==1){
			ti++; teo++;
			break;
		}
		int t1=sumti;
		int t2=sumteo;
		sumteo+=arr[r];
		sumti+=arr[l];
		sumteo=min(sumteo, sumti);
		sumti=min(sumteo, sumti);
		arr[l]-=sumti-t1;
		arr[r]-=sumteo-t2;
		if(!arr[l]){
			ti++; l++;
		}
		if(!arr[r]){
			teo++; r--;
		}
		
	}
	cout<<ti<<" "<<teo;
}