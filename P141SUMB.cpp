#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	int arr[n+1]={};
	int tmp;
	for(int i=0; i<n ;i++){
		cin >> tmp;
		if(tmp<=n) arr[tmp]++;
	}
	int res=0;
	for(int i=1; i<=n; i++){
		if(!arr[i]) res++;
	}
	cout << res;
	
} 