#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int lenmin= 1e9, xuongmin =1e9;
	int len=0, xuong=0;
	while(n--){
		int x ,y;
		cin>>x>>y;
		len+=x;
		xuong+=y;
		lenmin=min(lenmin, x);
		xuongmin=min(xuongmin, y);
	}
	xuong+=lenmin;
	len+=xuongmin;
	cout<<max(len, xuong);
}
