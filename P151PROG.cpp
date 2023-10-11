#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,k;
int arr[15];
int ok=1;

void ktao(){
	for(int i=1;i<=k;i++) arr[i]=k;
}

void sinh(){
	int i=k;
	while(i>=1 && arr[i]==n-k+i) i--;
	if(i<1) ok=0;
	else{
		arr[i]++;
		for(int j=i+1;j<=k;j++) arr[j]=arr[j-1]+1;
	}
}

int main() {
	cin>>n>>k;
	ktao();
	while(ok){
		for(int i=1;i<=k;i++) cout<<arr[i];
		cout<<'\n';
		sinh();
	}
}