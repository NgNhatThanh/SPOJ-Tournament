#include <bits/stdc++.h>
#define ll long long
using namespace std;

int res[70000][20];

int main() {
	int n;
	cin>>n;
	int end=pow(2,n);
	for(int i=0; i<n; i++) {
		int kt=1;
		int check=0;
		int cnt=0;
		int stop=pow(2,n-i-1);
		for(int j=0; j<end; j++) {
			if(cnt==stop && kt) {
				cnt=0;
				kt=0;
				check=1;
			}
			if(cnt==2*stop) {
				cnt=0;
				if(check) check=0;
				else check=1;
			}
			res[j][i]=check;
			cnt++;
		}
	}
	for(int i=0; i<end; i++) {
		for(int j=0; j<n; j++) cout<<res[i][j];
		cout<<'\n';
	}
}