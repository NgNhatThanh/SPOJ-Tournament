#include <iostream>
#include <cmath>

using namespace std;
int nt[1000000];

int process(int n, int k) {
	for(int i=2; i<=n; i++) {
		if(nt[i]==0) {
			for(int j=i; j<=n; j+=i) {
				if(nt[j]==1) continue;
				k--;
				if(k==0) return j;
				nt[j]=1;
			}
		}
	}
}

int main() {
	int n, k;
	cin>>n>>k;
	cout<<process(n, k);
}