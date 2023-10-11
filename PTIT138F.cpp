#include <bits/stdc++.h>

using namespace std;
 
int main (){
	int a;
	cin>>a;
	while(a--){
		int n, k;
		cin>>n>>k;
		string arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		string res[n];
		int check[50]={};
		while(k--){
			int start, end;
			cin>>start>>end;
			check[start-1]=1;
			res[end-1]=arr[start-1];
		}
		for(int i=0;i<n;i++){
			if(res[i].size()==0){
				for(int j=0;j<n;j++){
					if(check[j]==0){
						check[j]=1;
						cout<<arr[j]<<" ";
						break;
					}
				}
			}
			else cout<<res[i]<<" ";
		}
		cout<<'\n';
	}
}