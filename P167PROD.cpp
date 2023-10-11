#include <bits/stdc++.h>
 
using namespace std;

void Try(string &x, int n){
	for(int i=0;i<x.size();i++){
		if(x[i]=='?') x[i]=n+48;
	}
}

int main(){
	string a, b, c;
	cin>>a>>b>>c;
	for(int i=0;i<10;i++){
		string tmp1 = a, tmp2 = b, tmp3 = c;
		Try(tmp1, i);
		Try(tmp2, i);
		Try(tmp3, i);
		int m = stoi(tmp1);
		int n = stoi(tmp2);
		int p = stoi(tmp3);
		if(m+n==p){
			cout<<i;
			return 0;
		}
	}
} 