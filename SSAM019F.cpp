#include <bits/stdc++.h>
 
using namespace std;
 
long long fibo[100]={0,1,1};
 
void sang(){
	for(int j=3;j<=92;j++) fibo[j]=fibo[j-1]+fibo[j-2];
}

int main(){
	sang();
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		cout<<fibo[n]<<'\n';
	}
} 