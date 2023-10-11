#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cot[15], xuoi[50], nguoc[50];
int res=0;
int n;

void vet(int i){
	for(int j=1;j<=n;j++){
		if(!cot[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
			cot[j]=1;
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
			if(i==n) res++;
			else vet(i+1);
			cot[j]=0;
			xuoi[i-j+n]=0;
			nguoc[i+j-1]=0;
		}
	}
}

int main() {
	cin>>n;
	vet(1);
	cout<<res;
}
