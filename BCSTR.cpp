#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	cin>>a>>b;
	a='*'+a;
	b='*'+b;
	int res=0;
	int arr[a.size()+5][b.size()+5];
	memset(arr, 0, sizeof(arr));
	for(int i=1; i<a.size(); i++) {
		for(int j=1; j<b.size(); j++) {
			if(a[i]==b[j]) arr[i][j]=arr[i-1][j-1]+1;
			else arr[i][j]=max(arr[i-1][j], arr[i][j-1]);
			res=max(res, arr[i][j]);
		}
	}
	cout<<res;
}