#include <bits/stdc++.h>

using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	char arr[2*m][2*n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			char tmp;
			cin>>tmp;
			arr[i][2*n-j-1]=arr[i][j]=tmp;
		}
	}
	for(int i=0;i<2*n;i++){
		for(int j=m;j<2*m;j++){
			arr[j][i]=arr[2*m-j-1][i];
		}
	}
	int p,q;
	cin>>p>>q;
	p--; q--;
	if(arr[p][q]=='.') arr[p][q]='#';
	else arr[p][q]='.';
	for(int i=0;i<2*m;i++){
		for(int j=0;j<2*n;j++) cout<<arr[i][j];
		cout<<'\n';
	}
}