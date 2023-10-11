#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1073741824;

int uoc[1000005];

void sang(){
	for(int i=1;i<=1000000;i++){
		for(int j=i;j<=1000000;j+=i) uoc[j]++;
	}	
}

int main() {
	sang();
	int a,b,c;
	cin>>a>>b>>c;
	ll res=0;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				int tmp = i*j*k;
				res+=uoc[tmp];
			}
		}
	}
	cout<<res%mod;
}
