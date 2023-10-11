#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	char arr[n+5][m+5];
	int x,y,z,t;
	int ok=0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>arr[i][j];
			if(arr[i][j]=='B') {
				z=i;
				t=j;
				if(!ok) {
					ok=1;
					x=i;
					y=j;
				}
			}
		}
	}
	cout<<(z+x)/2<<' '<<(t+y)/2;
}