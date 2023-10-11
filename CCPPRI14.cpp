#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nt[1005];

void sang(){
	nt[1]=1;
	for(int i=2;i<=sqrt(1000);i++){
		for(int j=i*i;j<=1000;j+=i) nt[j]=1;
	}
}

int main() {
	sang();
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		for(int i=4;i<=n;i++){
			int tmp = sqrt(i);
			if(tmp*tmp==i && nt[tmp]==0) cout<<i<<" ";
		}
		cout<<'\n';
	}
}