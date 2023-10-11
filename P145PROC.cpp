#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;
 
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster()
	set<int> v;
	for(int i=0; i<10; i++){
		int n;
		cin >> n;
		int tmp=n%42;
		v.insert(tmp);
	}
	cout << v.size();
}  