#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int a[m], b[n];
	for(int &x : a) cin>>x;
	sort(a, a+m);
	int tmp[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
		tmp[i]=b[i];
	}
	sort(tmp, tmp+n);
	int l=0, r=0;
	map<int, int> v;
	while(l<m && r<n){
		v[tmp[r]]=v[tmp[r-1]];
		while(l<m && a[l]<=tmp[r]){
			l++;
			v[tmp[r]]++;
		}
		r++;
	}
	while(r<n){
		v[tmp[r]]=v[tmp[r-1]];
		r++;
	}
	for(int x : b) cout<<v[x]<<"\n";
}