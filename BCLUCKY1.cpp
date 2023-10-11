#include <bits/stdc++.h>
 
using namespace std;
 
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
int check(long long n){
	int cnt=0;
	while(n){
		int tmp=n%10;
		if(tmp==4 || tmp==7) cnt++;
		n/=10;
	}
	return cnt==4 || cnt==7;
}
 
int main() {
	faster
	long long n;
	cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
}  