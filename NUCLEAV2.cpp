#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	while(cin>>n) {
		if(!n) return 0;
		pair<int, int> arr[n];
		for(pair<int, int> &x : arr) cin>>x.first>>x.second;
		int x1,y1, x2,y2, q;
		cin>>x1>>y1>>x2>>y2>>q;
		pair<double, double> kc[n];
		for(int i=0; i<n; i++) {
			kc[i].first = sqrt((x1-arr[i].first)*(x1-arr[i].first)+(y1-arr[i].second)*(y1-arr[i].second));
			kc[i].second = sqrt((x2-arr[i].first)*(x2-arr[i].first)+(y2-arr[i].second)*(y2-arr[i].second));
		}
		while(q--) {
			int r1, r2;
			cin>>r1>>r2;
			int res=0;
			for(pair<double, double> x : kc) {
				if(x.first<=r1 || x.second<=r2) res++;
			}
			cout<<res<<'\n';
		}
	}
}