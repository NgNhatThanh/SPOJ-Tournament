#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int tmp=n;
	int res=0;
	int k = n/5;
	res += k; n %= 5;
	if(n%3!=0){
		while(n%3!=0){
			if(n>tmp){
				break;
			}
			n += 5;
			res--;
		}
		if(n>tmp) cout << "-1";
		else cout << res+n/3;
	}
	else cout << res+(n==3);
} 