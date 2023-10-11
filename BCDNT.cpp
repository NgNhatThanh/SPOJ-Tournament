#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int res = 0;
// Dung y tuong thuat toan Merge Sort de dem cap nghich the

void count(int arr[], int l, int mid, int r){
	vector<int> v1(arr+l, arr+mid+1);
	vector<int> v2(arr+mid+1, arr+r+1);
	int i=0, j=0;
	int k=0;
	while(i<v1.size() && j<v2.size()){
		if(v1[i]>v2[j]){
			res+=v1.size()-i;
			arr[l++]=v2[j++];
		}
		else{
			arr[l++]=v1[i];
			i++;
		}
	}
	while(i<v1.size()){
		arr[l++]=v1[i++];
	}
	while(j<v2.size()) arr[l++]=v2[j++];
}

void split(int arr[], int l, int r){
	if(l>=r) return;
	int mid = (l+r)/2;
	split(arr, l, mid);
	split(arr, mid+1, r);
	count(arr, l, mid , r);
}

int main() {
	cin>>n;
	int arr[n];
	for(int &x : arr) cin>>x;
	split(arr, 0, n-1);
	cout<<res;
}