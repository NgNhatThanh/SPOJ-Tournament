#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
 
using namespace std;

vector<int> uoc;

void timuoc(int m, int n){
	int tmp = min(m,n);
	int can = sqrt(tmp);
	for(int i=1;i<=can;i++){
		if(tmp%i==0){
			if(m%i==0 && n%i==0) uoc.push_back(i);
			int k = tmp/i;
			if(m%k==0 && n%k==0) uoc.push_back(k);
		}
	}
}

int main() {
	int m,n;
	cin>>m>>n;
	timuoc(m,n);
	sort(uoc.begin(), uoc.end(), greater<int>());
	int k;
	cin>>k;
	while(k--){
		int l, r;
		cin>>l>>r;
		int ok=1;
		for(int x : uoc){
			if(x<l){
				ok=0;
				break;
			}
			if(x>=l && x<=r){
				cout<<x<<'\n';
				break;
			} 
		}
		if(!ok) cout<<"-1\n";
	}
} 