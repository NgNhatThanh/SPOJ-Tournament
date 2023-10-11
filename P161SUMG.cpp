#include <bits/stdc++.h>

using namespace std;

int main() {
	int tmp;
	int sum=0;
	for(int i=0;i<5;i++){
		cin>>tmp;
		sum+=tmp;
	}
	if(!sum || sum%5) cout<<"-1";
	else cout<<sum/5;
}