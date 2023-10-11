#include <bits/stdc++.h>

using namespace std;

int main(){
	int r, c ,a, b;
	cin>>r>>c>>a>>b;
	char arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++) cin>>arr[i][j];
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<a;j++){
			for(int k=0;k<c;k++){
				for(int z=0;z<b;z++){
					cout<<arr[i][k];
				}
			}
			cout<<'\n';
		}
	}
}