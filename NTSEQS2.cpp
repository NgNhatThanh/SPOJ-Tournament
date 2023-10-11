#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n, s;
	cin>>n>>s;
	int arr[n];
	for(int &x : arr) cin>>x;
	vector<int> v(s+1, 0);
	v[0]=1;
	for(int i=0; i<n; i++) {
		for(int j=s; j>=arr[i]; j--) {
			if(v[j-arr[i]]==1) v[j]=1;
		}
	}
	if(v[s]) cout<<"YES";
	else cout<<"NO";
}