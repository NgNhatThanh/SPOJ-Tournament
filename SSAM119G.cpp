#include <iostream>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--) {
		int n, k;
		cin>>n>>k;
		int sum=0;
		int arr[n];
		for(int &x: arr) {
			cin>>x;
			sum+=x;
		}
		if(sum<k) cout<<"NO\n";
		else {
			bool kt[10005]= {};
			kt[0]=1;
			for(int x : arr) {
				for(int j=k; j>=x; j--) {
					if(kt[j-x]) kt[j]=1;
				}
			}
			if(kt[k]) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}