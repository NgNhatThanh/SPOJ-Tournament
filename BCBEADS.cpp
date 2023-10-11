#include <bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster
	int n;
	cin >> n;
	int arr[n];
	int res=0;
	cin >> arr[0];
	for(int i=1; i<n; i++){
		cin >> arr[i];
		if(arr[i] != arr[i-1]) res++;
	}
	cout << res;
}  