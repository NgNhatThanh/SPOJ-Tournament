#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	map<int, int> mp;
	int nn=2e9, ln=0;
	for(int &x : arr) {
		cin>>x;
		mp[x]++;
		ln=max(ln, x);
		nn=min(nn, x);
	}
	if(mp.size()<=2) cout<<"YES";
	else if(mp.size()>3) cout<<"NO";
	else {
		if((nn+ln)%2) cout<<"NO";
		else {
			cout<<"YES";
		}
	}
}