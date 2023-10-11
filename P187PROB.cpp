#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int nt[1420];
int luu[300];
int k=0;

void sang() {
	int can = sqrt(1415);
	int i=2;
	for(; i<=can; ++i) {
		int j=i*i;
		for(; j<=1415; j+=i) nt[j]=1;
	}
	i=2;
	for(; i<=1415; ++i) {
		if(!nt[i]) luu[k++]=i;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	sang();
	int a;
	cin>>a;
	ll sum=0;
	int n;
	while(a--) {
		cin>>n;
		int i=0;
		for(; i<k; i++) {
			if(n<luu[i]) break;
			if(n%luu[i]==0) {
				int mu=0;
				while(n%luu[i]==0) {
					n/=luu[i];
					mu++;
				}
				sum+=luu[i]*mu;
			}
		}
		if(n>1) sum+=n;
	}
	cout<<sum;
}



