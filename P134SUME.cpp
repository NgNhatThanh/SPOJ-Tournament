#include <bits/stdc++.h>
 
using namespace std;

int main() {
	int arr[4];
	for(int &x : arr) cin>>x;
	sort(arr, arr+4);
	cout<<arr[0]*arr[2];
} 