#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int m,n;
	cin>>m>>n;
	char arr[m+5][n+5];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	int id1=0, id2=0, maxx=-1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j]=='.'){
				int cnt=0;
				for(int k=i-1;k<=i+1;k++){
					for(int z=j-1;z<=j+1;z++){
						if(arr[k][z]=='o') cnt++;
					}
				}
				if(cnt>=maxx){
					maxx=cnt;
					id1=i; id2=j;
				}
			}
		}
	}
	if(maxx!=-1) arr[id1][id2]='o';
	int res=0;
	int check[60][60]={};
	for(int i=1;i<=m;i++){
	  for(int j=1;j<=n;j++){
	    if(arr[i][j]=='o' ){
	      for(int k=i-1;k<=i+1;k++){
	        for(int z=j-1;z<=j+1;z++){
	          if((k!=i || z!=j) && arr[k][z]=='o' && check[k][z]==0){
	            res++;
	          }
	        }
	      }
	      check[i][j]=1;
	    }
	  }
	}
	cout<<res;
// cout<<id1<<' '<<id2<<' '<<maxx;
} 