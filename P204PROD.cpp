#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		int arr[n];
		int le=0, chan=0;
		for(int &x : arr) {
			cin>>x;
			if(x%2) le++;
			else chan++;
		}
		if((chan && le) || le%2) cout<<"YES";
		else cout<<"NO";
		cout<<'\n';
	}
}