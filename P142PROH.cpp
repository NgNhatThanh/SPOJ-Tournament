#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	char arr[a][b];
	int hang[15]= {}, cot[15]= {};
	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			cin>>arr[i][j];
			if(arr[i][j]=='S') {
				hang[i]=1;
				cot[j]=1;
			}
		}
	}
	int res=0;
	int cnt=0;
	for(int i=0; i<a; i++) {
		if(!hang[i]) cnt++;
	}
	res+=cnt*b;
	int tmp=cnt;
	cnt=0;
	for(int i=0; i<b; i++) {
		if(!cot[i]) cnt++;
	}
	if(res) res-=tmp*cnt;
	res+=cnt*a;
	cout<<res;
}