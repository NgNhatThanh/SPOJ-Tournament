#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	char arr[5*m+1][5*n+1];
	for(int i=0;i<5*m+1;i++){
		for(int j=0;j<5*n+1;j++) cin>>arr[i][j];
	}
	int res[5]={};
	for(int i=1;i<5*m+1;i+=5){
		for(int j=1;j<5*n+1;j+=5){
			int cnt=0;
			for(int k=0;k<4;k++){
				if(arr[i+k][j]=='*') cnt++;
			}
			res[cnt]++;
		}
	}
	for(int i=0;i<5;i++) cout<<res[i]<<' ';
	
}