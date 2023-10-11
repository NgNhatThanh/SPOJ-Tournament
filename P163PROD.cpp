#include <bits/stdc++.h>
 
using namespace std;

void xoa(string &a){
	string tmp;
	for(int i=0;i<a.size();i++){
		if(a[i]!='0') tmp.push_back(a[i]);
	}
	a=tmp;
}

int main(){
	int a, b;
	cin>>a>>b;
	int c = a+b;
	string m =to_string(a);
	string n =to_string(b);
	string p =to_string(c);
	xoa(m); xoa(n); xoa(p);
	a = stoi(m); b = stoi(n); c = stoi(p);
	if(c==a+b) cout<<"YES";
	else cout<<"NO";
} 