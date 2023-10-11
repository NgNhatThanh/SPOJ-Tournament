#include <bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
const int mod=1e9+7;
 
int main() {
	faster
	int a,b,c;
	cin >> a >> b >> c;
	int res=fmax(c-b-1, b-a-1);
	cout << res;
}  