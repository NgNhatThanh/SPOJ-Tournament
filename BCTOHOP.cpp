#include <bits/stdc++.h>
 
using namespace std;
 
int ok=0;
 
int arr[20];
 
void kt(int k){
	for(int i=1; i<=k; i++) arr[i]=i;
}
 
void sinh(int n, int k) {
	int i=k;
	while(i>=1 && arr[i]==n-k+i){
		i--;
	}
	if(i==0) ok=1;
	else{
		arr[i]++;
		for(int j=i+1; j<=k; j++) arr[j]=arr[j-1]+1;
	}
}
 
int main() {
	int n,k;
	cin >> n >> k;
	kt(k);
	while(1){
		for(int i=1; i<=k; i++) cout << arr[i]<<" ";
		sinh(n, k);
		cout << '\n';
		if(ok) break;
	}
}  