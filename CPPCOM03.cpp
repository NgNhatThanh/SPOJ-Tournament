#include <bits/stdc++.h>
using namespace std;
 
int n;
int ok=1;
int arr[25];
 
void ktao(){
	for(int i=1; i<=n; i++) arr[i]=i;
}
 
void sinh(){
	int i=n-1;
	while(i>=1 && arr[i]>arr[i+1]) i--;
	if(i==0) ok=0;
	else{
		int j=n;
		while(arr[j]<arr[i]) j--;
		swap(arr[j], arr[i]);
		reverse(arr+i+1, arr+n+1);
	}
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a;
	cin>>a;
	while(a--){
		ok=1;
		cin >> n;
		ktao();
		while(ok){
			for(int i=1; i<=n; i++) cout << arr[i];
			cout << ' ';
			sinh();
		}
		cout << '\n';
	}
	return 0;
} 