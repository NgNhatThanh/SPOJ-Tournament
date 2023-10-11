#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<int, int> mp;

int fibo[50]={0,1,1};

void sang(){
	mp[0]=1;
	mp[1]=1;
	for(int i=3;i<20;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
		mp[fibo[i]]=1;
	}
}

int main() {
	sang();
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int arr[n];
		for(int &x : arr){
			cin>>x;
			if(mp[x]) cout<<x<<" ";
		}
		cout<<'\n';
	}
}