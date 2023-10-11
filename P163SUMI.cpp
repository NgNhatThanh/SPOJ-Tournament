#include <bits/stdc++.h>
#define ll long long
using namespace std;

string mau="";

void ktao(){
	for(int i=1;i<=500;i++){
		string tmp =to_string(i);
		mau+=tmp;
	}
}

int main() {
	ktao();
	int n;
	cin>>n;
	cout<<mau[n-1];
}