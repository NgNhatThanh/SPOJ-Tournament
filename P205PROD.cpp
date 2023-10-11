#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long

int main () {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n];
		map<int, int> mp;
		for(int &x : arr) {
			cin>>x;
			mp[x]++;
		}
		if(mp.size()>1) cout<<"1\n";
		else cout<<n<<'\n';
	}
}