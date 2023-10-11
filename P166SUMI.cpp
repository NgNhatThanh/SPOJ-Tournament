#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int mot=0, khong=0;
	int tmp;
	while(n--){
		cin>>tmp;
		if(tmp) mot++;
		else khong++;
	}
	if(khong!=1) cout<<"NO";
	else cout<<"YES";
}
