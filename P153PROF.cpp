#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int rad[n];
	int dire[n];
	for(int i=0; i<n; i++) {
		cin>>rad[i];
	}
	for(int i=0; i<n; i++) {
		cin>>dire[i];
	}
	sort(rad, rad+n);
	sort(dire, dire+n);
	int l=0, r=0;
	int res=0;
	while(r<n){
		if(dire[r]>rad[l]){
			r++;
			res++;
			l++;
		}
		else r++;
	}
	cout<<res;
}