#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int arr[n];
	int mot=0, am=0;
	for(int &x : arr){
		cin>>x;
		if(x==1) mot++;
		else am++;
	}
	int toida = min(mot, am);
	while(m--){
		int l, r;
		cin>>l>>r;
		int kc = r-l+1;
		if(kc%2 || kc>2*toida) cout<<"0\n";
		else cout<<"1\n";
	}
}