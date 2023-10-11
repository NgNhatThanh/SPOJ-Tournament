#include <bits/stdc++.h>

using namespace std;

int check(string a, string b){
	for(int i=1;i<a.size();i++){
		if(abs(a[i]-a[i-1])!=abs(b[i]-b[i-1])) return 0;
	}
	return 1;
}

int main() {
	int a;
	cin>>a;
	while(a--){
		string s;
		cin>>s;
		string tmp=s;
		reverse(tmp.begin(), tmp.end());
		if(check(tmp, s)) cout<<"YES\n";
		else cout<<"NO\n";
	}

}	