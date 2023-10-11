#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
	int a;
	cin >> a;
	int arr[24][60];
	for(int i=0; i<24; i++){
		for(int j=0; j<60; j++) arr[i][j]=0;
	}
	int res=0;
	while(a--){
		int m, n;
		cin >> m >> n;
		arr[m][n]++;
		res=max(arr[m][n], res);
	}
	cout << res;
}   