#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int y, k, n;
	cin >> y >> k >> n;
	int t =	y/k + (y%k!=0);
	int d = k*t;
	d -= y;
	if(d==0) d=k;
	int check=0;
	for(int i=d; y+i<=n; i+=k) {
		cout << i << " ";
		check=1;
	}
	if(!check) cout << "-1";
} 